// this is a ciruclar array
#include<iostream>
#include<climits>
using namespace std;
int minAdjacent(int a[], int n){
    int minAbsolute=INT_MAX;
    int diff=0;
    for(int i=0;i<n-1;i++){
        diff=a[i]-a[i+1];
        if(diff<0){
            diff*=-1;
        }
        minAbsolute=min(minAbsolute,diff);
    }
    diff=a[0]-a[n-1];
        if(diff<0){
            diff*=-1;
        }
        minAbsolute=min(minAbsolute,diff);
        return minAbsolute;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<minAdjacent(a,n)<<endl;
    return 0;
}