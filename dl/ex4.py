import tensorflow as tf
from tensorflow.keras import layers, models
from tensorflow.keras.datasets import mnist
import numpy as np

# Load dataset
(x_train, _), (x_test, _) = mnist.load_data()

# Normalize data
x_train = x_train / 255.0
x_test = x_test / 255.0

# Flatten images
x_train = x_train.reshape((60000, 784))
x_test = x_test.reshape((10000, 784))

# Build autoencoder
model = models.Sequential()

# Encoder
model.add(layers.Dense(128, activation='relu', input_shape=(784,)))
model.add(layers.Dense(64, activation='relu'))

# Decoder
model.add(layers.Dense(128, activation='relu'))
model.add(layers.Dense(784, activation='sigmoid'))

# Compile
model.compile(optimizer='adam', loss='binary_crossentropy')

# Train model
model.fit(x_train, x_train, epochs=3, batch_size=256)

# Test reconstruction
reconstructed = model.predict(x_test)

print("Autoencoder training completed")