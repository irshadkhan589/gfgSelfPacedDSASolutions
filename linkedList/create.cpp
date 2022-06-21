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
int main(){
    Node *head =new Node(10);
    Node *temp1 =new Node(20);
    Node *temp2 =new Node(30);
    head->next= temp1;
    temp1->next=temp2;
    temp2->next=NULL;
    cout<<head->data<<"-->"<<temp1->data<<"-->"<<temp2->data<<endl;
    return 0;
}