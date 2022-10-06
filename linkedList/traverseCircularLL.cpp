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


// for loop
// void traverse(Node *head){
//   if(head == NULL){
//     return;
//   }
//   cout<<head->data<<' ';
//   for(Node *temp = head->next ; temp!= head ; temp = temp->next){
//     cout<<temp->data<<' ';
//   }
// }


//  do while
void traverse(Node *head){
  if(head == NULL){
    return;
  }
  Node *temp = head;
  do {
    cout<<temp->data<<' ';
    temp = temp->next;
  } while(temp!=head);
}



















int main(){
  Node *head = new Node(10);
  Node *temp = new Node(20);
  head->next = temp;
  temp->next = head;
  traverse(head);
  return 0;
}
