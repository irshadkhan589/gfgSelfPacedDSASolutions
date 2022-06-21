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
Node *insert(Node *head, int value){
    Node *temp = new Node(value);
    temp->next = head;
    return temp;
}
void display(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<' ';
        curr = curr->next;
    }
}

int main(){
    Node *head = new Node(10);
    head = insert(head,30);
    head = insert(head,40);
    display(head);
    cout<<endl;
    return 0;
}