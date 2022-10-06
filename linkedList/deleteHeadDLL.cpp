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
Node *deleteAtBegin(Node *head){
  if(head == NULL ){
    return NULL;
  }
  if(head->next == NULL){
    delete(head);
    return NULL;
  }
  Node *temp = head->next;
  temp->prev = NULL;
  delete(head);
  return temp;
}
int main(){
  Node *head = new Node(10);
  Node *temp = new Node(20);
  head->next= temp;
  temp->prev = head;
  head = deleteAtBegin(head);
  cout<<head->data<<' ';
  return 0;
}
