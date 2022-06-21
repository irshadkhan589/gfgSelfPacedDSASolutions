#include<iostream>
using namespace std;

struct Node{
    Node *next;
    int data;
    Node(int x){
        data =x;
        next = NULL;
    }
};

Node *deleteAtEnd(Node *head){
 Node *temp = head;
 if(temp == NULL){
     return NULL;
 }   
 else if(temp->next ==NULL){
     return NULL;
 }
 else{
     while(temp->next->next!=NULL){
         temp = temp->next;
     }
     delete(temp->next);
     temp->next = NULL;
     return head;
 }
 return head;
}

void display(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<' ';
        curr=curr->next;
    }
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next= new Node(30);
    head = deleteAtEnd(head);
    display(head);
    return 0;
}