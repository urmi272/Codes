#include <iostream>

struct Node {
    int data;
    Node* next;
};

// Function to create a linked list based on user input
Node* createLinkedList(int n) {
    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < n; ++i) {
        int value;
        std::cout << "Enter data for node " << i + 1 << ": ";
        std::cin >> value;

        Node* newNode = new Node{value, nullptr};
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

// Function to display the linked list
void displayLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "NULL\n";
}

bool compareLists(Node* list1, Node* list2) {
    while (list1 != nullptr && list2 != nullptr) {
        if (list1->data != list2->data)
            return false;
        list1 = list1->next;
        list2 = list2->next;
    }
    return (list1 == nullptr && list2 == nullptr);
}
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* nextNode;

    while (current != nullptr) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    return prev; // New head of the reversed list
}

int main() {
    int num1, num2;
    std::cout << "Enter the number of nodes1: ";
    std::cin >> num1;
    Node* myList = createLinkedList(num1);
    std::cout << "Enter the number of nodes2: ";
    std::cin >> num2;
    Node* myList2 = createLinkedList(num2);

    std::cout << "Linked List created:\n";
    displayLinkedList(myList);
    displayLinkedList(myList2);

    // Compare the lists
    if (compareLists(myList, myList2))
        std::cout << "Lists are equal.\n";
    else
        std::cout << "Lists are not equal.\n";

    // Reverse a linked list
    Node* reversedList1 = reverseList(myList);
    
    Node* reversedList2 = reverseList(myList2);

    // Display the reversed lists
    std::cout << "Reversed List 1: ";
    Node* temp1 = reversedList1;
    while (temp1 != nullptr) {
        std::cout << temp1->data << " -> ";
        temp1 = temp1->next;
    }
    std::cout << "NULL\n";

    std::cout << "Reversed List 2: ";
    Node* temp2 = reversedList2;
    while (temp2 != nullptr) {
        std::cout << temp2->data << " -> ";
        temp2 = temp2->next;
    }
    std::cout << "NULL\n";

    // Clean up: Free memory
    delete reversedList1;
    delete reversedList2;
    delete myList;
    delete myList2;

    return 0;
}
