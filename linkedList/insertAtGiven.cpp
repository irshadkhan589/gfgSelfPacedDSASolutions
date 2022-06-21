#include<iostream>
using namespace std;

struct Node{
    Node *next;
    int data;
    Node(int x){
        data = x;
        next = NULL;
    }
};

int numberOfNodes(Node *head){
    int count = 0;
    Node *tempo = head;
    while(tempo!=NULL){
        count++;
        tempo=tempo->next;
    }
    return count;
}

Node *insertAtGiven(Node *head, int value, int position, int count){
    Node *temp = head;
    if(head == NULL){
        temp->data = value;
        return temp;
    }
    while(temp!=NULL && position)
}

void display(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<' ';
        curr=curr->next;
    }
}

int main(){
    int count;
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    count =numberOfNodes(head);
    head = insertAtGiven(head,40,3,count);
    display(head);
    return 0;
}