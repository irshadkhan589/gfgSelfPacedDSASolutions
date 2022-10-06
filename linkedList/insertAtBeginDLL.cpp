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
Node *insertAtBegin(Node *head, int value){
  Node *temp = new Node(value);
  if(head==NULL){
    return temp;
  }
  temp->next = head;
  head->prev = temp;
  return temp;
}
int main(){
  Node *head = new Node(10);
  head = insertAtBegin(head,2);
  cout<<head->data<<' '<<head->next->data<<' ';
  return 0;
}
