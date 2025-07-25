#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() {
        head = nullptr;
    }

    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        if (head != nullptr) {
            head->prev = newNode;
        }
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
        newNode->prev = lastNode;
    }

    void deleteNode(int key) {
        Node* temp = head;
        // If head node itself holds the key to be deleted
        if (temp != nullptr && temp->data == key) {
            head = temp->next;
            if (head != nullptr) {
                head->prev = nullptr;
            }
            delete temp;
            return;
        }
        // Search for the key to be deleted
        while (temp != nullptr && temp->data != key) {
            temp = temp->next;
        }
        // If key was not present in the list
        if (temp == nullptr) return;
        // Unlink the node from linked list
        if (temp->next != nullptr) {
            temp->next->prev = temp->prev;
        }
        if (temp->prev != nullptr) {
            temp->prev->next = temp->next;
        }

        delete temp;
    }
    void printList() {
        Node* currentNode = head;
        while (currentNode != nullptr) {
            cout << currentNode->data << " <-> ";
            currentNode = currentNode->next;
        }
        cout << "null" << endl;
    }
};
int main() {
    DoublyLinkedList dlist;
    dlist.insertAtBeginning(1);
    dlist.insertAtEnd(2);
    dlist.insertAtEnd(3);
    cout << "Doubly linked list after insertions:" << endl;
    dlist.printList();

    dlist.deleteNode(2);
    cout << "Doubly linked list after deleting node with data 2:" << endl;
    dlist.printList();

    return 0;
}
