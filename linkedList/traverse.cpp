// // #include<iostream>
// // using namespace std;
// // struct Node{
// //     Node *next;
// //     int data;
// //     Node(int x){
// //         data=x;
// //         next=NULL;
// //     }
// // };
// // void display(Node *head){
// //     Node *curr = head;
// //     while(curr!=NULL){
// //         cout<<" "<<curr->data<<" ";
// //         curr = curr->next;
// //     }
// // }
// // int main(){
// //
// // Node *head =new Node(10);
// // //Creating by assigning temp variables
// // // Node *temp1 =new Node(20);
// // // Node *temp2 =new Node(30);
// // // head->next = temp1;
// // // temp1->next = temp2;
// // //Creating without assigning temp variables
// // head->next = new Node(20);
// // head->next->next= new Node(30);
// //
// // display(head);
// // }
//
// #include <iostream>
// using namespace std;
// struct Node{
//   int data;
//   Node *next=NULL;
//   Node(int x){
//     data = x;
//     next = NULL;
//   }
// };
// void display(Node *head){
//   Node *current = head;
//   while(current!=NULL){
//     cout<<current->data<<' ';
//     current = current->next;
//   }
// }
// int main(){
//   Node *head = new Node(1);
//   head->next = new Node(20);
//   display(head);
// }


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
void display(Node *head){
  Node *current = head;
  while(current !=NULL){
    cout<<current->data<<' ';
    current = current->next;
  }
}
int main(){
  Node *head = new Node(10);
  Node *temp1 = new Node(20);
  Node *temp2 = new Node(300);
  head->next = temp1;
  temp1->next = temp2;
  display(head);
  return 0;
}
