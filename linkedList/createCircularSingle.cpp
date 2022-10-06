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
int main(){
    Node *head = new Node(10);
    Node *temp = new Node(20);
    head->next = temp;
    temp->next = head;
    Node *current = head;
    int i = 0;
    while(current!=NULL || i < 5){
      cout<<current->data<<endl;
      current=current->next;
      i++;
    }
    return 0;
}
