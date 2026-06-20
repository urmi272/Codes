import tensorflow as tf
from tensorflow.keras import layers, models
import numpy as np

# Generator
generator = models.Sequential([
    layers.Dense(16, activation='relu', input_dim=10),
    layers.Dense(32, activation='relu'),
    layers.Dense(1)
])

# Discriminator
discriminator = models.Sequential([
    layers.Dense(32, activation='relu', input_dim=1),
    layers.Dense(16, activation='relu'),
    layers.Dense(1, activation='sigmoid')
])

discriminator.compile(optimizer='adam',
                      loss='binary_crossentropy',
                      metrics=['accuracy'])

# GAN
discriminator.trainable = False

gan_input = layers.Input(shape=(10,))
fake_data = generator(gan_input)
gan_output = discriminator(fake_data)

gan = models.Model(gan_input, gan_output)

gan.compile(optimizer='adam', loss='binary_crossentropy')

# Training
for epoch in range(1000):
    
    real_data = np.random.normal(0, 1, (16,1))
    noise = np.random.normal(0, 1, (16,10))
    
    fake_data = generator.predict(noise)
    
    X = np.vstack((real_data, fake_data))
    y = np.vstack((np.ones((16,1)), np.zeros((16,1))))
    
    discriminator.train_on_batch(X, y)
    
    noise = np.random.normal(0,1,(16,10))
    gan.train_on_batch(noise, np.ones((16,1)))

print("GAN training completed")