#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }
    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* lastNode = head;
        while (lastNode->next != nullptr) {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }
    void deleteNode(int key) {
        Node* temp = head;
        Node* prev = nullptr;
        // If head node itself holds the key to be deleted
        if (temp != nullptr && temp->data == key) {
            head = temp->next; // Changed head
            delete temp; // Free old head
            return;
        }
        // Search for the key to be deleted
        while (temp != nullptr && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }
        // If key was not present in the list
        if (temp == nullptr) return;
        // Unlink the node from linked list
        prev->next = temp->next;
        delete temp; // Free memory
    }

    void printList() {
        Node* currentNode = head;
        while (currentNode != nullptr) {
            cout << currentNode->data << " -> ";
            currentNode = currentNode->next;
        }
        cout << "null" << endl;
    }
};

int main() {
    LinkedList llist;
    llist.insertAtBeginning(1);
    llist.insertAtEnd(2);
    llist.insertAtEnd(3);
    cout << "Linked list after insertions:" << endl;
    llist.printList();

    llist.deleteNode(2);
    cout << "Linked list after deleting node with data 2:" << endl;
    llist.printList();

    return 0;
}
