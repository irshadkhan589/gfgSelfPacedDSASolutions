#include<iostream>
using namespace std;

struct Node{
 Node *next;
 int data;
 Node(int x){
     data=x;
     next = NULL;
 }
};

void displayRecursive(Node *head){
    Node *curr = head;
    if(curr== NULL){
        return;
    }
    cout<<curr->data<<' ';
    return displayRecursive(curr->next);
}

int main(){
Node *head = new Node(10);
head->next = new Node(20);
head->next->next = new Node(30);
displayRecursive(head);
return 0;
}