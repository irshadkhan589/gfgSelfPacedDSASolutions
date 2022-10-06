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
 if(head == NULL){
   return NULL;
 }
 if(head->next == NULL){
   return NULL;
 }
 Node *current = head;
 while(current->next->next!=NULL){
   current = current->next;
 }

 current->next = NULL;
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
