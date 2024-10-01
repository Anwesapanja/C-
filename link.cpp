#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class CircularLinkedList {
private:
    Node* head;
public:
    CircularLinkedList() {
        head = nullptr;
    }

    // Function to insert a node at the beginning of the circular linked list
    void insertFirst(int value) {
        Node* newNode = new Node;
        newNode->data = value;

        if (head == nullptr) {
            newNode->next = newNode;
            head = newNode;
        } else {
            newNode->next = head->next;
            head->next = newNode;
        }
    }

    // Function to insert a node at the end of the circular linked list
    void insertLast(int value) {
        Node* newNode = new Node;
        newNode->data = value;

        if (head == nullptr) {
            newNode->next = newNode;
            head = newNode;
        } else {
            newNode->next = head->next;
            head->next = newNode;
            head = newNode;
        }
    }

    // Function to insert a node at a specified position in the circular linked list
    void insertAtPosition(int value, int position) {
        Node* newNode = new Node;
        newNode->data = value;

        if (position <= 1) {
            insertFirst(value);
            return;
        }

        Node* current = head->next;
        for (int i = 2; i < position; i++) {
            if (current == head->next) {
                cerr << "Position not found. Inserting at the end." << endl;
                insertLast(value);
                return;
            }
            current = current->next;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    // Function to display the circular linked list
    void displayList() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* current = head->next;
        do {
            cout << current->data << " -> ";
            current = current->next;
        } while (current != head->next);
        cout << endl;
    }
};

int main() {
    CircularLinkedList list;
    int choice, value, position;

    do {
        cout << "Circular Linked List Menu:" << endl;
        cout << "1. Insert at the beginning" << endl;
        cout << "2. Insert at the end" << endl;
        cout << "3. Insert at a specific position" << endl;
        cout << "4. Display the list" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to insert at the beginning: ";
                cin >> value;
                list.insertFirst(value);
                break;

            case 2:
                cout << "Enter the value to insert at the end: ";
                cin >> value;
                list.insertLast(value);
                break;

            case 3:
                cout << "Enter the value to insert: ";
                cin >> value;
                cout << "Enter the position to insert at: ";
                cin >> position;
                list.insertAtPosition(value, position);
                break;

            case 4:
                cout << "Circular Linked List: ";
                list.displayList();
                break;

            case 5:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}