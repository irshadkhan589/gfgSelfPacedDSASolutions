#include<iostream>
#include<stack>
using namespace std;

void previousGreaterElementNaive(int arr[],int n){
  cout<<"-1"<<' ';

  for(int i = 1;i<n;i++){
    int maxEl = -99999;
    int j;
    for(j = i-1;j>=0;j--){
      if(arr[j]>arr[i]){
        cout<<arr[j]<<endl;
        break;
      }
    }
    if(j==-1){
      cout<<"-1"<<' ';
    }
  }
  cout<<endl;
}

void previousGreaterElementOptimised(int arr[], int n){
    stack<int> s;
    s.push(arr[0]);
    cout<<"-1"<<" ";
    for(int i = 1;i<n;i++){
      while(s.empty()==false and s.top()<=arr[i]){
        s.pop();
      }
      int result = s.empty()?-1:s.top();
      cout<<result<<' ';
      s.push(arr[i]);
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
  previousGreaterElementNaive(arr,n);
  previousGreaterElementOptimised(arr,n);
  return 0;
}
