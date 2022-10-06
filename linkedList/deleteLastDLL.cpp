#include<iostream>
using namespace std;
struct Node{
  int data;
  Node *prev;
  Node *next;
  Node(int x){
    data = x;
    prev = NULL;
    next = NULL;
  }
};
void display(Node *head){
  Node *current = head;
  while(current !=NULL){
    cout<<current->data<<' ';
    current = current->next;
  }
}
Node *deleteAtEnd(Node *head){
  if(head==NULL){
    return NULL;
  }
  if(head->next == NULL){
    delete(head);
    return NULL;
  }
  Node *current = head;
  while(current->next!=NULL){
    current = current->next;
  }
  current->prev->next = NULL;
  delete(current);
  return head;
}
int main(){
  Node *head = new Node(20);
  Node *temp = new Node(30);
  head->next= temp;
  temp->prev = head;
  head = deleteAtEnd(head);
  display(head);
  return 0;
}
