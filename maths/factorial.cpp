#include<iostream>
using namespace std;
int factorialIterative(int num){
    int result=1;
    
  while(num>0){
      result*=num;
      num--;
  }
  return result;
}
int factorialRecursive(int num){
    if(num==0){
        return 1;
    }
    return num*factorialRecursive(num-1);
}
int main(){
    int num;
    cin>>num;
    cout<<factorialIterative(num)<<endl;
    cout<<factorialRecursive(num)<<endl;
    return 0;
}