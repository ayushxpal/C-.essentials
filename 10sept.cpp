#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

Node *head = NULL;
void insert (int n) {
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = head;
    newNode -> prev = NULL;
    if(head != NULL) {
        head->prev=newNode;
    }
    head = newNode;
}

void print() {
    cout << "Data element in singly linked list are: ";
    Node *temp=head;
    while(temp!=NULL) {
        cout << temp->data<<" ";
        temp=temp->next;
    }
}

int main() {
    insert(20);
    insert(30);
    print();
    return 0;
}
