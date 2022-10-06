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

void traverse(Node *head){
  Node *current = head;
  while(current!=NULL){
    cout<<current->data<<' ';
    current = current->next;
  }
}

int main(){
  Node *head = new Node(10);
  Node *node2 = new Node(20);
  Node *node3 = new Node(30);
  head->next = node2;
  // head->next->next = node3;
  node2->next = node3;

  traverse(head);
  return 0;
}
