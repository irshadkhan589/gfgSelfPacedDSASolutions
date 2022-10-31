#include<bits/stdc++.h>
using namespace std;

void nextGreaterElementNaive(int arr[],int n){
  // cout<<"-1"<<' ';

  for(int i = 0;i<n;i++){
    int maxEl = -99999;
    int j;
    for(j = i+1;j<n;j++){
      if(arr[j]>arr[i]){
        cout<<arr[j]<<endl;
        break;
      }
    }
    if(j==n){
      cout<<"-1"<<' ';
    }
  }
  cout<<"end"<<endl;
}

void nextGreaterElementOptimised(int arr[], int n){
    stack<int> s;
    vector<int> v;
    s.push(arr[n-1]);
    v.push_back(-1);
    for(int i = n-2;i>=0;i--){
      while(s.empty()==false and s.top()<=arr[i]){
        s.pop();
      }
      int result = s.empty()?-1:s.top();
      v.push_back(result);
      s.push(arr[i]);
    }
    cout<<endl;
    reverse(v.begin(),v.end());
    for(int i = 0; i<v.size();i++){
      cout<<v[i]<<" ";
    }
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  nextGreaterElementNaive(arr,n);
  nextGreaterElementOptimised(arr,n);
  return 0;
}
