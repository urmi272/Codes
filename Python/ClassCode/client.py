# client.py
import socket

def send_string_to_server(string):
    client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    client_socket.connect(('localhost', 12345))
    
    client_socket.send(string.encode())
    response = client_socket.recv(1024).decode()
    
    print(f"Server response: {response}")
    
    client_socket.close()

if __name__ == "__main__":
    string = input("Enter a string to check for pangram: ")
    send_string_to_server(string)
