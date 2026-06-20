import numpy as np
from sklearn.neural_network import BernoulliRBM
from sklearn.pipeline import Pipeline
from sklearn.linear_model import LogisticRegression
from sklearn.datasets import load_digits
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import MinMaxScaler

# Load dataset
digits = load_digits()
X = digits.data
y = digits.target

# Normalize data
scaler = MinMaxScaler()
X = scaler.fit_transform(X)

# Train-test split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2)

# RBM layer
rbm = BernoulliRBM(n_components=64, learning_rate=0.01, n_iter=10)

# Logistic regression classifier
logistic = LogisticRegression(max_iter=1000)

# DBN pipeline
dbn = Pipeline(steps=[('rbm', rbm), ('logistic', logistic)])

# Train model
dbn.fit(X_train, y_train)

# Evaluate
accuracy = dbn.score(X_test, y_test)

print("DBN Accuracy:", accuracy)