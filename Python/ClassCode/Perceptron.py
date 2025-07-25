# Perceptron and Multilayer Perceptron implementation in Python
import numpy as np

class Perceptron:
    def __init__(self, learning_rate=0.01, num_iterations=50):
        self.learning_rate = learning_rate
        self.num_iterations = num_iterations
        self.weights = None
        self.bias = None

    def fit(self, X, y):
        num_samples, num_features = X.shape

        self.weights = np.zeros(num_features)
        self.bias = 0

        for _ in range(self.num_iterations):
            for idx, x_i in enumerate(X):
                linear_output = np.dot(x_i, self.weights) + self.bias
                y_predicted = np.where(linear_output >= 0, 1, 0)

                update = self.learning_rate * (y[idx] - y_predicted)
                self.weights += update * x_i
                self.bias += update

    def predict(self, X):
        if self.weights is None or self.bias is None:
            raise ValueError("Model weights are not initialized. Call 'fit' before 'predict'.")
        linear_output = np.dot(X, self.weights) + self.bias
        y_predicted = np.where(linear_output >= 0, 1, 0)
        return y_predicted

class MultilayerPerceptron:
    def __init__(self, learning_rate=0.01, num_iterations=1000):
        self.learning_rate = learning_rate
        self.num_iterations = num_iterations
        self.weights0 = 2 * np.random.random((2, 2)) - 1
        self.weights1 = 2 * np.random.random((2, 1)) - 1

    def sigmoid(self, x):
        return 1 / (1 + np.exp(-x))

    def sigmoid_derivative(self, x):
        return x * (1 - x)

    def fit(self, X, y):
        for _ in range(self.num_iterations):
            layer0 = X
            layer1 = self.sigmoid(np.dot(layer0, self.weights0))
            layer2 = self.sigmoid(np.dot(layer1, self.weights1))

            layer2_error = y - layer2
            layer2_delta = layer2_error * self.sigmoid_derivative(layer2)

            layer1_error = layer2_delta.dot(self.weights1.T)
            layer1_delta = layer1_error * self.sigmoid_derivative(layer1)

            self.weights1 += layer1.T.dot(layer2_delta) * self.learning_rate
            self.weights0 += layer0.T.dot(layer1_delta) * self.learning_rate

    def predict(self, X):
        layer0 = X
        layer1 = self.sigmoid(np.dot(layer0, self.weights0))
        layer2 = self.sigmoid(np.dot(layer1, self.weights1))
        return np.where(layer2 >= 0.5, 1, 0)

def main():
    X = np.array([[0, 0], [0, 1], [1, 0], [1, 1]])

    # AND gate
    y_and = np.array([0, 0, 0, 1])
    perceptron_and = Perceptron(learning_rate=0.01, num_iterations=100)
    perceptron_and.fit(X, y_and)
    predictions_and = perceptron_and.predict(X)
    print("AND Gate Predictions:", predictions_and)

    # OR gate
    y_or = np.array([0, 1, 1, 1])
    perceptron_or = Perceptron(learning_rate=0.01, num_iterations=100)
    perceptron_or.fit(X, y_or)  # Pass y_or instead of 0
    predictions_or = perceptron_or.predict(X)
    print("OR Gate Predictions:", predictions_or)

    # XOR gate
    y_xor = np.array([[0], [1], [1], [0]])
    mlp_xor = MultilayerPerceptron(learning_rate=0.1, num_iterations=10000)
    mlp_xor.fit(X, y_xor)
    predictions_xor = mlp_xor.predict(X)
    print("XOR Gate Predictions:", predictions_xor)

if __name__ == "__main__":
    main()
