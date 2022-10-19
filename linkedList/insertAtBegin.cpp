#include<iostream>
using namespace std;

struct Node{
  int data;
  Node *next;
  Node(int x){
    data = x;
    next = NULL;
  }
};

Node *insertAtBegin(Node *head, int value){
    Node *temp = new Node(value);
    if(head == NULL){
      return temp;
    }
    else{
      temp->next = head;
      return temp;
    }
}

void traverse(Node *head){
  Node *current = head;
  while(current!=NULL){
    cout<<current->data<<"->";
    current = current->next;
  }
}

int main(){
  Node *head = new Node(10);
  Node *node2 = new Node(20);
  head->next = node2;
  head = insertAtBegin(head,5);
  head = insertAtBegin(head,2);
  head = insertAtBeginO1(head,1);
  traverse(head);
  return 0;
}
