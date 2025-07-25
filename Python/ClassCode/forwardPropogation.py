import numpy as np

# Define the sigmoid function
def sigmoid(x):
    return 1 / (1 + np.exp(-x))

# Input datasets
inputs = np.array([[0, 0], [0, 1], [1, 0], [1, 1]])

# Expected outputs
expected_output = np.array([[0], [1], [1], [0]])

# Seed random numbers to make calculation deterministic
np.random.seed(1)

# Weights initialization
weights0 = 2 * np.random.random((2, 2)) - 1
weights1 = 2 * np.random.random((2, 1)) - 1

# Forward propagation
layer0 = inputs
layer1 = sigmoid(np.dot(layer0, weights0))
layer2 = sigmoid(np.dot(layer1, weights1))

# Print output
print("Output:")
print(layer2)
