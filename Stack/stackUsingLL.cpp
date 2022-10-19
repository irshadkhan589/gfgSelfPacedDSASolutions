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
struct myStack{
  Node *head;
  int sz;
    myStack(){
    head = NULL;
    sz = 0;
    }
    void push(int x){
      Node *temp = new Node(x);
      temp->next = head;
      head = temp;
      sz++;
    }
    int pop(){
      if(sz == 0){
        cout<<"Stack Empty"<<endl;
        return -99999;
      }
      int res = head->data;
      Node *temp = head;
      head = head->next;
      delete(temp);
      sz--;
      return res;
    }

   int peek(){
       if(head==NULL){cout<<"Stack is Empty"<<endl;return 99999;}
       return head->data;
   }

   int size(){
       return sz;
   }

   bool isEmpty(){
       return head==NULL;
   }
};
int main(){
  myStack s;
  s.push(10);
  s.push(20);
  cout<<s.pop()<<endl;
  cout<<s.peek()<<endl;
  cout<<s.isEmpty()<<endl;
  return 0;
}
