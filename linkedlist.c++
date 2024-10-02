#include <iostream>

class Node {
public:
    int data;
    Node* next;  // Pointer to the next node

    Node(int val) {  // Constructor
        data = val;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {  // Constructor
        head = nullptr;
    }

    // Insert node at the end
    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Print the linked list
    void display() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "NULL" << std::endl;
    }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display();  // Output: 10 -> 20 -> 30 -> NULL

    return 0;
}
