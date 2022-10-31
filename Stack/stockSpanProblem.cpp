#include<iostream>
#include<stack>
using namespace std;

void stockSpanNaive(int arr[], int n){
  cout<<"1"<<" ";
  for(int i = 1 ; i<n;i++){
    int j;
    int count = 1;
    for(j = i - 1 ; j>=0;j--){
        if(arr[i]>=arr[j]){
          count++;
        }
        else{
          break;
        }
    }
    cout<<count<<" ";
  }
  cout<<endl;
}

void stockSpanOptimised(int arr[], int n){
  stack<int> s;
  s.push(0);
  cout<<"1"<<" ";
  for(int i = 1;i<n;i++){
    while(s.empty()==false && arr[s.top()]<=arr[i]){
      s.pop();
    }
    int span = s.empty()? i + 1: i - s.top();
    cout<<span<<" ";
    s.push(i);
  }
  cout<<endl;
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  stockSpanNaive(arr,n);
  stockSpanOptimised(arr,n);
  return 0;
}
