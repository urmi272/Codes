#!/usr/bin/env python3

import cgi
import cgitb
import string

# Enable debugging
cgitb.enable()

def is_pangram(s):
    alphabet = set(string.ascii_lowercase)
    return set(s.lower()) >= alphabet

# Send HTTP header
print("Content-Type: text/html\n")

# Start HTML
print("<html><body>")

# Get form data
form = cgi.FieldStorage()
input_string = form.getvalue("input_string", "")

# Check if the input string is a pangram
if input_string:
    result = is_pangram(input_string)
    response = "Pangram" if result else "Not a Pangram"
    print(f"<h2>Result: {response}</h2>")
else:
    print("<h2>No input provided</h2>")

# End HTML
print("</body></html>")
