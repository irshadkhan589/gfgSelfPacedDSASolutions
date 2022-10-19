#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

void printlist(Node *head){
    if(head==NULL)return;
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

// Node *insertEnd(Node *head,int x){
//     Node *temp=new Node(x);
//     if(head==NULL){
//         temp->next=temp;
//         return temp;
//     }
//     else{
//         Node *curr=head;
//         while(curr->next!=head)
//             curr=curr->next;
//         curr->next=temp;
//         temp->next=head;
//         return head;
//     }
// }

// Inserting in O1 time complexity

Node *insertEnd(Node *head, int value){
  Node *temp = new Node(value);
  if(head == NULL){
    temp->next = temp;
    return temp;
  }
  temp->next = head->next;
  head->next = temp;
  int swapVar = temp->data;
  temp->data = head->data;
  head->data = swapVar;
  return temp;
}

int main()
{
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=head;
	head=insertEnd(head,11);
	printlist(head);
	return 0;
}
