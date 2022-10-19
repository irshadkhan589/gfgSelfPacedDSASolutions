#include<bits/stdc++.h>
using namespace std;
struct myStack{
  int *arr;
  int capacity;
  int top;
  myStack(int c){
    capacity = c;
    arr = new int[capacity];
    top = -1;
  }
  void push(int value){
    if(top == capacity - 1){
      cout<<"Overflow"<<endl;
      return;
    }
    top++;
    arr[top] = value;
  }
  int pop(){
    if(top == -1){
      cout<<"Underflow"<<endl;
      return INT_MIN;
    }
    int res = arr[top];
    top--;
    return res;
  }
  int peek(){
    if(top == -1){
      cout<<"Underflow"<<endl;
      return INT_MIN;
    }
    return arr[top];
  }
  int size(){
    return top+1;
  }
  bool isEmpty(){
    return top == -1;
  }
};
int main(){
  myStack s(5);
  s.push(10);
  s.push(20);
  s.push(30);
  cout<<s.pop()<<endl;
  cout<<s.size()<<endl;
  cout<<s.peek()<<endl;
  cout<<s.isEmpty()<<endl;
  return 0;
}
