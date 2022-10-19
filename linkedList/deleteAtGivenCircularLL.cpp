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

Node *deleteAtBegin(Node *head){
  if(head == NULL){
    return head;
  }
  if(head -> next == head){
    delete head;
    return NULL;
  }
  Node *temp = head->next;
  head->data = temp->data;
  head->next = head->next->next;
  delete temp;
  return head;
}

Node *deleteAtGiven(Node *head, int k){
    if(head == NULL){
      return head;
    }
    if(k == 1){
    return deleteAtBegin(head);
    }
    Node *curr = head;
    int i = 0;
    while(i<k-2){
      curr = curr->next;
      i++;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}




void traverse(Node *head){
  if(head == NULL){
    cout<<"NULL"<<' ';
    return;
  }
  Node *current = head;
  do {
    cout<<current->data<<" --> ";
    current = current->next;
  } while(current!=head);
}

int main(){
  Node *head = new Node(10);
  Node *node2 = new Node(20);
  Node *node3 = new Node(30);
  head->next = node2;
  node2->next = node3;
  node3->next = head;
  head = deleteAtGiven(head,1);
  traverse(head);
  return 0;
}
