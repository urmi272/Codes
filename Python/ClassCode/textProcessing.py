# Text Preprocessing in Python
import nltk
from nltk.tokenize import word_tokenize
from nltk.corpus import stopwords
from nltk.stem import PorterStemmer
import string

# Download required NLTK resources (run once)
nltk.download('punkt')
nltk.download('punkt_tab')
nltk.download('stopwords')

# Input text
text = "This is a simple example to demonstrate text preprocessing in Python."

print("Original Text:")
print(text)
print()

# A. Tokenization
tokens = word_tokenize(text)
print("Tokens:")
print(tokens)
print()

# B. Stop words removal
stop_words = set(stopwords.words('english'))
filtered_tokens = [
    word for word in tokens
    if word.lower() not in stop_words and word not in string.punctuation
]

print("After Stop Words Removal:")
print(filtered_tokens)
print()

# C. Stemming
stemmer = PorterStemmer()
stemmed_words = [stemmer.stem(word) for word in filtered_tokens]

print("After Stemming:")
print(stemmed_words)
print()

# D. Script validation (ASCII check)
if text.isascii():
    print("Script Validation: The text contains only ASCII characters.")
else:
    print("Script Validation: The text contains non-ASCII characters.")
