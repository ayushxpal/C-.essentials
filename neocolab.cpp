// Single File Programming Question
// Problem Statement



// Kamal wants to create a linked list and perform the following operations on it:

// Insert a node at the beginning of the linked list.
// Append a node at the end of the linked list.
// Print the final linked list.


// Write a program that takes the number of nodes to be inserted, followed by their values, as input. After inserting the nodes, the program should ask for a new value and append a node with that value at the end of the linked list. Finally, the program should print the contents of the linked list.



// Example



// Input:

// 5

// 1 2 3 4 5

// 6



// Output:

// Created Linked list: 5 4 3 2 1

// Final list: 5 4 3 2 1 6



// Explanation:

// The program first creates a linked list by inserting nodes at the beginning. The input specifies that there are 5 nodes, and their values are 1, 2, 3, 4, and 5. After inserting these nodes, the program asks for a new value, which is 6. It then appends a node with the value 6 at the end of the linked list. Finally, the program prints the contents of the linked list, which are 5, 4, 3, 2, 1, and 6 in that order.



// Company tags: Capgemini

// Input format :
// The first line consists of an integer, n, representing the number of nodes to be initially inserted into the linked list.

// The second line of input consists of n space-separated integers, representing the elements of the linked list.

// The third line of input consists of an integer, m, representing the value of the new node to be inserted at the end of the linked list.

// Output format :
// The first line of output prints "Created Linked list: " followed by the initial linked list elements, separated by space.

// The second line of output prints "Final list: " followed by the final linked list elements, after inserting the new node, separated by space.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 10

// 1 ≤ elements, m ≤ 100

// Sample test cases :
// Input 1 :
// 5
// 1 2 3 4 5
// 6
// Output 1 :
// Created Linked list: 5 4 3 2 1
// Final list: 5 4 3 2 1 6
// Input 2 :
// 3
// 10 20 30
// 40
// Output 2 :
// Created Linked list: 30 20 10
// Final list: 30 20 10 40
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


#include <iostream>
using namespace std;

// Node structure for singly linked list
struct Node {
    int data;
    Node* next;
};

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Function to insert a node at the beginning
Node* insertAtBeginning(Node* head, int data) {
    Node* newNode = createNode(data);
    newNode->next = head;
    return newNode;
}

// Function to append a node at the end
void appendAtEnd(Node* head, int data) {
    Node* newNode = createNode(data);
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
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

int main() {
    int n;
    cin >> n;

    Node* head = nullptr;

    // Reading initial elements and creating the linked list
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        head = insertAtBeginning(head, value);
    }

    // Reading the value for the new node to be appended at the end
    int m;
    cin >> m;

    // Printing the created linked list
    cout << "Created Linked list: ";
    printList(head);

    // Appending the new node at the end
    appendAtEnd(head, m);

    // Printing the final linked list
    cout << "Final list: ";
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
