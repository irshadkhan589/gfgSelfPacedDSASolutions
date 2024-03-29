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


// in O(N) time
// Node *insertAtBegin(Node *head, int value){
//   Node *temp = new Node(value);
//   Node *current = head;
//   if(head == NULL){
//     temp->next = temp;
//     return temp;
//   }
//   while(current->next!=head){
//     current = current->next;
//   }
//   current->next = temp;
//   temp->next = head;
//   return temp;
// }

// in O(1) time

  Node *insertAtBegin(Node *head, int value){
    Node *temp = new Node(value);
    if(head == NULL){
      temp->next = temp;
      return temp;
    }
    temp->next = head->next;
    head->next = temp;
    int swapVar;
    swapVar = head->data;
    head->data = temp->data;
    temp->data = swapVar;
    return head;
  }


void traverse(Node *head){
  if(head == NULL){
    return;
  }
  cout<<head->data<<' ';
  Node *curr = head;
  for(curr = head->next;curr!=head;curr=curr->next){
    cout<<curr->data<<' ';
  }
}

int main(){
  Node *head = new Node(10);
  Node *temp = new Node(20);
  head->next = temp;
  temp->next = head;
  head = insertAtBegin(head,5);
  head = insertAtBegin(head,4);
  traverse(head);
  return 0;
}
