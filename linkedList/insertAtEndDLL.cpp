#include<iostream>
using namespace std;
struct Node{
  int data;
  Node *prev;
  Node *next;
  Node(int x){
    data = x;
    next = NULL;
    prev = NULL;
  }
};
Node *insertAtEnd(Node *head, int data){
  Node *tempo = new Node(data);
  Node *curr = head;
  if(curr == NULL){
    return tempo;
  }
  while(curr->next!=NULL){
    curr=curr->next;
  }
  curr->next = tempo;
  tempo->prev = curr;
  return head;
}
void display(Node *head){
  Node *current = head;
  while(current!=NULL){
    cout<<current->data<<' ';
    current=current->next;
  }
}
int main(){
    Node *head = new Node(10);
    Node *temp = new Node(20);
    head->next = temp;
    temp->prev = head;
    head = insertAtEnd(head,40);
    display(head);
}
