import tkinter as tk

def print_input():
    user_input = entry.get()
    print(f"User Input: {user_input}")

# Create the main window
root = tk.Tk()
root.title("Simple Tkinter App")

# Create an entry widget
entry = tk.Entry(root, width=50, bg= "light blue")
entry.pack(pady=10)

# Create a button widget
button = tk.Button(root, text="Print Input", command=print_input, bg="Grey", fg="Black")
button.pack(pady=10)

# Run the application
root.mainloop()
