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
Node *reverseDLL(Node *head){
  if(head == NULL|| head->next == NULL){
    return NULL;
  }
  Node *swap = NULL;
  Node *current = head;
  while(current!=NULL){

    swap = current->prev;
    current->prev = current->next;
    current->next = swap;
    current = current->prev;
  }
  return swap->prev;
}
int main(){
  Node *head = new Node(10);
  Node *temp = new Node(20);
  head->next = temp;
  temp->prev = head;
  head = reverseDLL(head);
  cout<<head->data<<' '<<head->next->data<<' ';
  return 0;
}
