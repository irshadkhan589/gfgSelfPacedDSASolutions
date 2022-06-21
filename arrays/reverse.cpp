#include<iostream>
using namespace std;
void reverseInON(int a[], int n){
    int start = 0;
    int end=n-1;
    while(end>=start){
        swap(a[start],a[end]);
        start++;
        end--;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverseInON(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    return 0;
}