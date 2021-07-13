#include<iostream>
using namespace std;
int countUniques(int a[], int n){
    int count=1;
    for(int i=0;i<n-1;i++){
        if(a[i+1]!=a[i]){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<countUniques(a,n)<<endl;
    return 0;
}