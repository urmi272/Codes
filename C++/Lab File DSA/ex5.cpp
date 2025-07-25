#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class BinarySearchTree {
public:
    Node* root;

    BinarySearchTree() {
        root = nullptr;
    }
    Node* insert(Node* node, int data) {
        if (node == nullptr) {
            return new Node(data);
        }
        if (data < node->data) {
            node->left = insert(node->left, data);
        } else if (data > node->data) {
            node->right = insert(node->right, data);
        }
        return node;
    }

    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != nullptr) {
            current = current->left;
        }
        return current;
    }

    Node* deleteNode(Node* root, int data) {
        if (root == nullptr) {
            return root;
        }
        if (data < root->data) {
            root->left = deleteNode(root->left, data);
        } else if (data > root->data) {
            root->right = deleteNode(root->right, data);
        } else {
            if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            Node* temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }

    Node* search(Node* root, int data) {
        if (root == nullptr || root->data == data) {
            return root;
        }
        if (data < root->data) {
            return search(root->left, data);
        } else {
            return search(root->right, data);
        }
    }

    void inOrderTraversal(Node* root) {
        if (root != nullptr) {
            inOrderTraversal(root->left);
            cout << root->data << " ";
            inOrderTraversal(root->right);
        }
    }
};

int main() {
    BinarySearchTree bst;
    bst.root = bst.insert(bst.root, 50);
    bst.insert(bst.root, 30);
    bst.insert(bst.root, 20);
    bst.insert(bst.root, 40);
    bst.insert(bst.root, 70);
    bst.insert(bst.root, 60);
    bst.insert(bst.root, 80);

    cout << "In-order traversal of the BST: ";
    bst.inOrderTraversal(bst.root);
    cout << endl;

    cout << "Searching for 40 in the BST: ";
    Node* result = bst.search(bst.root, 40);
    if (result != nullptr) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
    cout << "Deleting 20 from the BST." << endl;
    bst.root = bst.deleteNode(bst.root, 20);
    cout << "In-order traversal after deletion: ";
    bst.inOrderTraversal(bst.root);
    cout << endl;
    return 0;
}
