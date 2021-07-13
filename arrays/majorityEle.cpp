#include<iostream>
using namespace  std;
int majorityEleONN(int a[], int n){
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(a[j]==a[i]){
                count++;
            }
        }
        if(count>n/2){
            return i;
        }
    }
    return -1;
}
int mooreVoting(int a[],int n){
    int m=0;
    int count=1;
    for(int i=1;i<n;i++){
        if(a[m]==a[i]){
            count++;
        }
        else
        count--;
        if(count==0){
            m=i;
            count=1;
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(a[m]==a[i]){
            count++;
        }
    }
    if(count>n/2){
        return m;
    }
    else
    return -1;
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }  
  cout<<majorityEleONN(a,n)<<endl;
  cout<<mooreVoting(a,n)<<endl;
  return 0;
} 

