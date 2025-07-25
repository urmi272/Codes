# server.py
import socket
#import string

# def is_pangram(s):
#     alphabet = set(string.ascii_lowercase)
#     return set(s.lower()) >= alphabet
def is_pangram(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    for char in alphabet:
        if char not in s.lower():
            return False
    return True

def start_server():
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server_socket.bind(('localhost', 12345))
    server_socket.listen(1)
    print("Server is listening on port 12345...")

    while True:
        client_socket, addr = server_socket.accept()
        print(f"Connection from {addr} has been established.")
        
        data = client_socket.recv(1024).decode()
        if not data:
            break
        
        result = is_pangram(data)
        response = "Pangram" if result else "Not a Pangram"
        client_socket.send(response.encode())
        
        client_socket.close()

if __name__ == "__main__":
    start_server()
