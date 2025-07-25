#include <iostream>

struct Node {
    int data;
    Node* next;
};

// Function to create a circular linked list
Node* createCircularList(int numNodes) {
    if (numNodes <= 0)
        return nullptr; // Empty list

    Node* head = new Node{1, nullptr};
    Node* tail = head;

    for (int i = 2; i <= numNodes; ++i) {
        Node* newNode = new Node{i, nullptr};
        tail->next = newNode;
        tail = newNode;
    }

    // Make it circular
    tail->next = head;

    return head;
}

// Function to display the circular linked list
void displayCircularList(Node* head, int numNodes) {
    Node* current = head;
    for (int i = 0; i < numNodes; ++i) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "Circular\n";
}

int main() {
    int numNodes = 5; // Adjust the number of nodes as needed

    // Create a circular linked list
    Node* myList = createCircularList(numNodes);

    // Display the circular list
    std::cout << "Circular Linked List: ";
    displayCircularList(myList, numNodes);

    // Clean up: Free memory
    while (myList != nullptr) {
        Node* temp = myList;
        myList = myList->next;
        delete temp;
    }

    return 0;
}
