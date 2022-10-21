#include<iostream>
#include<stack>
using namespace std;

int main(){
  stack <int> s;
  s.push(10);
  s.pop();
  s.push(20);
  s.push(25);
  cout<<s.top()<<endl;

  //  traverse
  while(s.empty()==false){
    cout<<s.top()<<endl;
    s.pop();
  }
  return 0;
}
