// Single File Programming Question
// Problem Statement



// Imagine you are developing a contact management application where users can maintain a singly linked list of names. 



// Initially, users can enter a sequence of names to form a list of contacts. Later, they can insert a new name at a specific position within the list to rearrange their contacts, ensuring the list is updated and displayed correctly.

// Input format :
// The first line of input consists of an integer n, representing the number of initial names.

// The next n lines each contain a single name, representing the initial list of contacts.

// The last line consists of a name and an integer pos, representing the new contact to be added and its position in the list.

// Output format :
// The output prints the updated list of contacts after inserting the new contact at the specified position.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 1 ≤ n ≤ 10

// 1 ≤ length of each name ≤ 100

// Sample test cases :
// Input 1 :
// 4
// John
// Alice
// Bob
// Emma
// Michael 3
// Output 1 :
// John Alice Michael Bob Emma 
// Input 2 :
// 3
// Emma
// Daniel
// Sophia
// Charlotte 1
// Output 2 :
// Charlotte Emma Daniel Sophia 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


#include <iostream>
#include <string>
using namespace std;

// Node structure for singly linked list
struct Node {
    string name;
    Node* next;
};

// Function to create a new node
Node* createNode(const string& name) {
    Node* newNode = new Node();
    newNode->name = name;
    newNode->next = nullptr;
    return newNode;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->name << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to insert a new node at a specific position
Node* insertAtPosition(Node* head, const string& newName, int pos) {
    Node* newNode = createNode(newName);

    // Special case: inserting at the head of the list
    if (pos == 0) {
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node* temp = head;
    // Traverse to the node just before the insertion position
    for (int i = 0; temp != nullptr && i < pos - 1; i++) {
        temp = temp->next;
    }

    // If the position is valid and temp is not nullptr, insert the new node
    if (temp != nullptr) {
        newNode->next = temp->next;
        temp->next = newNode;
    } else {
        // If position is beyond the end of the list, handle accordingly
        Node* last = head;
        while (last->next != nullptr) {
            last = last->next;
        }
        last->next = newNode;
    }

    return head;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // To ignore the newline character after the integer input

    Node* head = nullptr;
    Node* tail = nullptr;

    // Reading initial names
    for (int i = 0; i < n; i++) {
        string name;
        getline(cin, name);
        Node* newNode = createNode(name);
        if (head == nullptr) {
            head = newNode;
            tail = head;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Reading the new name and position
    string newName;
    int pos;
    cin >> newName >> pos;

    // Inserting the new name at the specified position
    head = insertAtPosition(head, newName, pos);

    // Printing the updated linked list
    printList(head);

    // Clean up the allocated memory
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
