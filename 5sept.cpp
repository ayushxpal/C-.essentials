#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head=NULL;
void insert(int n){
    Node *newNode=new Node;
    newNode->data=n;
    newNode->next=head;
    head=newNode;
}
void insertAtEnd(int n)
{
    Node *newNode=new Node;
    newNode->data=n;
    if(head==NULL){
        head=newNode;
    }
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void insertAtPosition(int pos,int n){
    Node *newNode=new Node;
    newNode->data=n;

}
void print(){
    cout<<"Data element in singly linked list are: ";
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    insert(30);
    insert(40);
    insertAtEnd(50);
    insertAtPosition(2,35);
    print();
    return 0;
}