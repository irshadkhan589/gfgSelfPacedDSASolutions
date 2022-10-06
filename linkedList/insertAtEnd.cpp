// // #include<iostream>
// // using namespace std;
// //
// // struct Node{
// //     Node *next;
// //     int data;
// //     Node(int x){
// //         data = x;
// //         next = NULL;
// //     }
// // };
// //
// // Node *insertAtEnd(Node *head, int value){
// //     Node *temp = new Node(value);
// //     if(head == NULL){
// //         return temp;
// //     }
// //     Node *curr = head;
// //     while(curr->next !=NULL){
// //         curr=curr->next;
// //     }
// //     curr->next = temp;
// //     return head;
// // }
// //
// // void display(Node *head){
// //     Node *curr = head;
// //     while(curr!=NULL){
// //         cout<<curr->data<<' ';
// //         curr = curr->next;
// //     }
// // }
// //
// // int main(){
// //  Node *head = new Node(10);
// //  head = insertAtEnd(head, 20);
// //  head = insertAtEnd(head, 30);
// //  display(head);
// //  return 0;
// // }
//
//


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
Node *insertAtEnd(Node *head, int value){
  Node *temp = new Node(value);
  if(head == NULL){
    return temp;
  }
  Node *current = head;
  while(current->next!=NULL){
    current=current->next;
  }
  current->next = temp;
  return head;
}
void display(Node *head){
  Node *current = head;
  while(current!=NULL){
    cout<<current->data<<' ';
    current = current->next;
  }
}
int main(){
  Node *head = new Node(10);
  head = insertAtEnd(head,1);
  display(head);
  return 0;
}
