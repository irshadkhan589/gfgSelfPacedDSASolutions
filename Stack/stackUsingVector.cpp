#include<bits/stdc++.h>
using namespace std;
struct myStack{
  vector<int> v;
  void push(int value){
    v.push_back(value);
  }
  int pop(){
    int res = v.back();
    v.pop_back();
    return res;
  }
  int size(){
    return v.size();
  }
  int peek(){
    return v.back();
  }
  bool isEmpty(){
    return v.empty();
  }
};
int main(){
  myStack s;
  s.push(10);
  s.push(20);
  s.push(30);
  cout<<s.pop()<<endl;
  cout<<s.size()<<endl;
  cout<<s.peek()<<endl;
  cout<<s.isEmpty()<<endl;
  return 0;
}
