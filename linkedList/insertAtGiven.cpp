#include<iostream>
using namespace std;

struct Node{
    Node *next;
    int data;
    Node(int x){
        data = x;
        next = NULL;
    }
};


Node *insertAtGiven(Node *head, int value, int position){
  Node *temp = new Node(value);
  if(position == 1){
    temp->next = head;
    return temp;
  }
  Node *current = head;
  for(int i = 1;i<= position-2 && current !=NULL;i++ ){
    current = current->next;
  }
  if(current == NULL){
    return head;
  }
  temp->next = current->next;
  current->next = temp;
  return head;
}
void display(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<' ';
        curr=curr->next;
    }
}

int main(){
    int count;
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head = insertAtGiven(head,40,4);
    display(head);
    return 0;
}
