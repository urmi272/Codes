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

class CircularLinkedList {
public:
    Node* head;

    CircularLinkedList() {
        head = nullptr;
    }

    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            newNode->next = head;
            temp->next = newNode;
            head = newNode;
        }
    }

    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    void deleteNode(int key) {
        if (head == nullptr) return;
        Node* temp = head;
        Node* prev = nullptr;
        // If head node itself holds the key to be deleted
        if (head->data == key) {
            while (temp->next != head) {
                temp = temp->next;
            }
            Node* toDelete = head;
            if (head->next == head) {
                head = nullptr;
            } else {
                temp->next = head->next;
                head = head->next;
            }
            delete toDelete;
            return;
        }
        // Search for the key to be deleted
        while (temp->next != head && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }
        // If key was not present in the list
        if (temp->data != key) return;
        // Unlink the node from linked list
        prev->next = temp->next;
        delete temp;
    }
    void printList() {
        if (head == nullptr) return;
        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "(back to head)" << endl;
    }
};

int main() {
    CircularLinkedList clist;
    clist.insertAtBeginning(1);
    clist.insertAtEnd(2);
    clist.insertAtEnd(3);
    cout << "Circular linked list after insertions:" << endl;
    clist.printList();

    clist.deleteNode(2);
    cout << "Circular linked list after deleting node with data 2:" << endl;
    clist.printList();

    return 0;
}
