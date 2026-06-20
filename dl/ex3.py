import tensorflow as tf
from tensorflow.keras import datasets, layers, models
from tensorflow.keras.preprocessing.sequence import pad_sequences

# Load IMDB dataset
(train_data, train_labels), (test_data, test_labels) = datasets.imdb.load_data(num_words=10000)

# Pad sequences
train_data = pad_sequences(train_data, maxlen=200)
test_data = pad_sequences(test_data, maxlen=200)

# Build RNN model
model = models.Sequential()

model.add(layers.Embedding(10000, 32, input_length=200))
model.add(layers.SimpleRNN(32))
model.add(layers.Dense(1, activation='sigmoid'))

# Compile model
model.compile(optimizer='adam',
              loss='binary_crossentropy',
              metrics=['accuracy'])

# Train model
model.fit(train_data, train_labels, epochs=3, batch_size=64)

# Evaluate model
test_loss, test_acc = model.evaluate(test_data, test_labels)

print("Test Accuracy:", test_acc)