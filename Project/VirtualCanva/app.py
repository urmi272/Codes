import cv2
import numpy as np
import google.generativeai as genai
import mediapipe as mp
from flask import Flask, render_template, Response, jsonify
from cvzone.HandTrackingModule import HandDetector
from PIL import Image
import time
import os
import threading

app = Flask(__name__)

# *Set up Gemini AI*
GEMINI_API_KEY = os.getenv("GEMINI_API_KEY","AIzaSyAhcmkqsZBQF4jKo74xDA6j65AeKcGe-qw")  # Replace with actual API key
genai.configure(api_key=GEMINI_API_KEY)

# Create a model instance
model = genai.GenerativeModel("gemini-1.5-flash")


# *Initialize Webcam*
cap = cv2.VideoCapture(0)
cap.set(3, 1280)  #here 3 and 4 aare specified  camera keys
cap.set(4, 720)

# *Initialize Hand Detector*
detector = HandDetector(detectionCon=0.7, maxHands=2)

# *Canvas for Drawing*
canvas = np.zeros((720, 1280, 3), dtype=np.uint8) #ye blank canvas bna rhaa hai with 3 colours, rgb
prev_pos = None
ai_output = "AI Output will appear here..."
processing = False
brush_color = (255, 0, 255)  # Default color (Pink)
brush_type = "Marker"  # Default brush type

# *Color Palette Positions*
color_palette = {
    "Red": (100, 50, (0, 0, 255)),
    "Green": (200, 50, (0, 255, 0)),
    "Blue": (300, 50, (255, 0, 0)),
    "Yellow": (400, 50, (0, 255, 255)),
    "White": (500, 50, (255, 255, 255)),
}

# *Brush Type Positions*
brush_types = {
    "Marker": (700, 50),
    "Pen": (800, 50),
    "Oil Brush": (900, 50),
    "Crayon": (1000, 50),
}

# *Function to Get Hand Data*
def getHandInfo(img):
    hands, img = detector.findHands(img, draw=True, flipType=True)
    if hands:
        hand = hands[0]
        lmList = hand["lmList"]
        fingers = detector.fingersUp(hand)
        return fingers, lmList
    return None


# *Function to Change Brush Color*
def checkColorSelection(lmList):
    global brush_color
    index_x, index_y = lmList[8][0], lmList[8][1]  # Index finger tip

    for color, (x, y, bgr) in color_palette.items():
        if x - 20 < index_x < x + 20 and y - 20 < index_y < y + 20:
            brush_color = bgr
            break

# *Function to Change Brush Type*
def checkBrushSelection(lmList):
    global brush_type
    index_x, index_y = lmList[8][0], lmList[8][1]  # Index finger tip

    for brush, (x, y) in brush_types.items():
        if x - 30 < index_x < x + 30 and y - 20 < index_y < y + 20:
            brush_type = brush
            break

# *Function to Draw on Virtual Canvas*
def draw(info, prev_pos, canvas):
    global brush_color, brush_type
    fingers, lmList = info
    current_pos = None


    if fingers == [0, 1, 0, 0, 0]:  # *Index Finger Up (Draw)*
        checkColorSelection(lmList)  # Check if touching the color palette
        checkBrushSelection(lmList)  # Check if selecting brush type
        current_pos = (lmList[8][0], lmList[8][1])  # Index finger tip

        if prev_pos is None:
            prev_pos = current_pos

        # *Different Brush Types*
        if brush_type == "Marker":
            cv2.line(canvas, current_pos, prev_pos, brush_color, 10)
        elif brush_type == "Pen":
            cv2.line(canvas, current_pos, prev_pos, brush_color, 5)
        elif brush_type == "Oil Brush":
            cv2.line(canvas, current_pos, prev_pos, brush_color, 15, lineType=cv2.LINE_AA)
        elif brush_type == "Crayon":
            cv2.line(canvas, current_pos, prev_pos, brush_color, 8, lineType=cv2.LINE_4)

    elif fingers == [1, 0, 0, 0, 0]:  # *Thumb Up (Clear Canvas)*
        canvas = np.zeros_like(canvas)

    return current_pos, canvas

# *Function to Send Data to AI Asynchronously*
def sendToAIAsync(canvas):
    global ai_output, processing
    processing = True
    pil_image = Image.fromarray(canvas)
    try:
        response = model.generate_content(["Solve this math problem step by step", pil_image])
        ai_output = response.text
    except Exception as e:
        ai_output = f"Error: {str(e)}"
    processing = False

# *Webcam Streaming*
def generate_frames():
    global canvas, prev_pos, ai_output, processing, brush_color, brush_type
    time.sleep(2)

    while True:
        success, img = cap.read()
        if not success:
            continue

        img = cv2.flip(img, 1)

        # Draw translucent background for the color palette
        overlay = img.copy()
        cv2.rectangle(overlay, (50, 30), (550, 80), (50, 50, 50), -1)  # Translucent black box
        cv2.addWeighted(overlay, 0.5, img, 0.5, 0, img)  # Apply transparency

        # Draw color selection buttons on top of the translucent background
        for color, (x, y, bgr) in color_palette.items():
            cv2.circle(img, (x, y), 20, bgr, -1)


        # Draw translucent background for the brush type selection
        overlay = img.copy()
        cv2.rectangle(overlay, (650, 30), (1050, 100), (50, 50, 50), -1)  # Translucent black box
        cv2.addWeighted(overlay, 0.5, img, 0.5, 0, img)  # Apply transparency

        # Draw brush type buttons in larger boxes with centered text
        for brush, (x, y) in brush_types.items():
            cv2.rectangle(img, (x - 50, y - 30), (x + 50, y + 30), (255, 255, 255), 2)  # Larger box
            text_size = cv2.getTextSize(brush, cv2.FONT_HERSHEY_SIMPLEX, 0.7, 2)[0]  # Get text width & height
            text_x = x - text_size[0] // 2  # Center horizontally
            text_y = y + text_size[1] // 2  # Center vertically
            cv2.putText(img, brush, (text_x, text_y), cv2.FONT_HERSHEY_SIMPLEX, 0.7, (255, 255, 255), 2)

        
        info = getHandInfo(img)
        if info:
            fingers, lmList = info
            prev_pos, canvas = draw(info, prev_pos, canvas)

            # *Trigger AI Processing in a New Thread*
            if fingers == [1, 1, 1, 1, 0] and not processing:
                threading.Thread(target=sendToAIAsync, args=(canvas.copy(),), daemon=True).start()

        image_combined = cv2.addWeighted(img, 0.9, canvas, 0.3, 0)

        ret, buffer = cv2.imencode('.jpg', image_combined)
        frame = buffer.tobytes()

        yield (b'--frame\r\n'
               b'Content-Type: image/jpeg\r\n\r\n' + frame + b'\r\n')

# *Flask Routes*
@app.route('/')
def index():
    return render_template('index.html', ai_output=ai_output)

@app.route('/video_feed')
def video_feed():
    return Response(generate_frames(), mimetype='multipart/x-mixed-replace; boundary=frame')

@app.route('/solve', methods=['POST'])
def solve():
    return jsonify(result=ai_output)

# *Run Flask App*
if __name__ == '__main__':
    app.run(debug=True)