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

Node *deleteAtBegin(Node *head){
    if(head == NULL){
        return NULL;
    }
    else{
        Node *temp = head->next;
        delete(head);
        return temp;
    }
}

void display(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<' ';
        curr = curr->next;
    }
}

int main(){
  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);
  head = deleteAtBegin(head);
  display(head);
  return 0;
}