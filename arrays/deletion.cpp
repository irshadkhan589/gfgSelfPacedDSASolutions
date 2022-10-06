#include<iostream>
using namespace std;
int deletion(int a[], int cap, int n, int i){
    if(i==n-1){
            return n-1;
    }else{
    for(int j=i;j<n-1;j++){
        a[j]=a[j+1];
    }
    return n-1;
}
}

int main(){
    //cap is the maximum capacity of array
    int cap,n,idx;
    cin>>cap>>n>>idx;
    int a[cap];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m=deletion(a,cap,n,idx);
    for(int i=0;i<m;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}