#include<iostream>
#include<stack>
using namespace std;


bool match(char a, char b){
  return ((a=='('&& b==')')
  ||
  (a=='{'&& b=='}')
  ||
  (a=='['&& b==']'));
}

bool checkBalance(string toCheck){
    stack <char> s;
    for(char x : toCheck){
      if(x=='('|| x == '{' || x=='['){
        s.push(x);
      }
      else{
        if(s.empty()){
          return false;
        }
        if(!match(s.top(),x)){
            return false;
        }
        else{
          s.pop();
        }
      }

    }
    return (s.empty()==true);
}

int main(){
  string toCheck = "{([])}[]";

  cout<<checkBalance(toCheck)<<endl;
  return 0;
}
