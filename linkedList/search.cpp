#include<iostream>
using namespace std;
struct Node{
  int data;
  Node *next;
  Node(int x){
    data  = x;
    next = NULL;
  }
};

// gfg video solution
int search(Node*head, int value){
  Node *current = head;
  int position = 1;
  while(current!=NULL){
      if(current->data==value){
        return position;
      }
      else{
        current = current->next;
        position++;
      }
  }
  return -1;
}


//  My solution
// void search(Node *head, int value){
//   Node *current = head;
//   int position = 1;
//   while(current!=NULL){
//     if(current->data==value){
//       cout<<"Value Found at "<<position<<' ';
//       position =0;
//       return;
//     }
//     current = current->next;
//     position++;
//   }
//   if(current == NULL && position!=0){
//     cout<<"Element not found";
//   }
// }
int main(){
  Node * head = new Node(210);
  head->next = new Node(230);
  head->next->next = new Node(240);
  cout<<search(head,250); // for gfg
  // search(head, 230); // for my solution
  return 0;
}
