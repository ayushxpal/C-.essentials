#include <iostream>
using namespace std;

// Node structure for linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the beginning
void insertAtBeginning(Node*& head, int newData) {
    Node* newNode = new Node(); // Create a new node
    newNode->data = newData;    // Assign data to the node
    newNode->next = head;       // Point the new node's next to the current head
    head = newNode;             // Update head to the new node
    cout << "Node inserted" << endl;
}

// Function to display the linked list
void displayList(Node* head) {
    cout << "Linked List: ";
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " "; // Print the data of the current node
        current = current->next;      // Move to the next node
    }
    cout << endl;
}

int main() {
    Node* head = nullptr; // Initialize the head pointer to null
    int n, choice;
    
    while (true) {
        cin >> n;    // Input the integer to insert
        insertAtBeginning(head, n); // Insert the integer at the beginning

        cin >> choice; // Input choice to continue (0) or stop (1)
        if (choice == 1) {
            displayList(head); // Display the linked list
            cout << "Node ended" << endl;
            break; // Stop the insertion process
        }
    }

    return 0;
}
