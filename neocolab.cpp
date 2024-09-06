// Single File Programming Question
// Problem Statement



// Sharon is developing a character editor for a simple text-based game. The editor allows users to maintain a singly linked list of characters representing a sequence of moves in the game. 



// Initially, users input a series of characters to create their move sequence. Later, they can insert a new character at a specific position within the sequence to alter their gameplay strategy, ensuring the list is updated and displayed correctly. Assist Sharon in the task.



// Company tags: TCS

// Input format :
// The first line contains an integer n, the number of initial characters.

// The second line consists of n characters, representing the initial move sequence.

// The last line contains a character and an integer pos, representing the new move to be added and its position in the sequence.

// Output format :
// The first line displays "Current Linked List:" followed by the initial sequence of moves in the next line.

// The third line displays "Updated Linked List:" followed by the updated sequence of moves after inserting the new move at the specified position in the next line.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 1 ≤ n ≤ 10

// Sample test cases :
// Input 1 :
// 6
// A B C D E F
// G 7
// Output 1 :
// Current Linked List:
// A B C D E F 
// Updated Linked List:
// A B C D E F G 
// Input 2 :
// 3
// A O B
// M 1
// Output 2 :
// Current Linked List:
// A O B 
// Updated Linked List:
// M A O B 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


#include <iostream>
using namespace std;

// Node structure for singly linked list
struct Node {
    char data;
    Node* next;
};

// Function to create a new node
Node* createNode(char data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to insert a new node at a specific position
Node* insertAtPosition(Node* head, char newChar, int pos) {
    Node* newNode = createNode(newChar);
    
    if (pos == 0) {
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node* temp = head;
    for (int i = 0; temp != nullptr && i < pos - 1; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position out of bounds" << endl;
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

int main() {
    int n;
    cin >> n;

    Node* head = nullptr;
    Node* tail = nullptr;

    // Reading initial characters
    for (int i = 0; i < n; i++) {
        char ch;
        cin >> ch;
        Node* newNode = createNode(ch);
        if (head == nullptr) {
            head = newNode;
            tail = head;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Printing the current linked list
    cout << "Current Linked List:" << endl;
    printList(head);

    // Reading the new character and position
    char newChar;
    int pos;
    cin >> newChar >> pos;

    // Inserting the new character at the specified position
    head = insertAtPosition(head, newChar, pos);

    // Printing the updated linked list
    cout << "Updated Linked List:" << endl;
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
