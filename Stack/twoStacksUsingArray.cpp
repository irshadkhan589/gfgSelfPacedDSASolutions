#include<iostream>
using namespace std;

// Start first stack from left side of the array and second stack from right side and maintain two pointers top1 and top2


struct myStack{
  int cap;
  int *arr;
  int top1;
  int top2;
  myStack(int n){
    cap = n;
    arr = new int[cap];
    top1 = -1;
    top2 = cap;
  }
void  push1(int value){
    if(top1+1>=top2){
      cout<<"Stack Overflow"<<endl;
      return;
    }
    top1++;
    arr[top1] = value;
  }
  void  push2(int value){
      if(top1+1>=top2){
        cout<<"Stack Overflow"<<endl;
        return;
      }
      top2--;
      arr[top2] = value;
    }
    int peek1(){
      if(top1>-1){
        return arr[top1];
      }
      else{
        return -99999;
      }
      return -99999;
    }
    int peek2(){
      if(top2<cap){
        return arr[top2];
      }
      else{
        return -99999;
      }
      return -99999;
    }
    int pop1(){
      if(top1==-1){
        cout<<"Stack Underflow"<<endl;
        return -99999;
      }
      int popped = arr[top1];
      top1--;
      return popped;
    }
    int pop2(){
      if(top2==cap){
        cout<<"Stack Underflow"<<endl;
        return -99999;
      }
      int popped = arr[top2];
      top2++;
      return popped;
    }
};

int main(){
  myStack s(5);
  s.push1(10);
  s.push2(9);
  s.push1(12);
  s.push2(11);
  cout<<s.pop1()<<endl;
  cout<<s.pop2()<<endl;
  cout<<s.peek1()<<endl;
  cout<<s.peek2()<<endl;
  return 0;
}
