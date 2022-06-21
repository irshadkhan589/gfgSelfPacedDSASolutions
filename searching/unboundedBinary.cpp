#include<iostream>
using namespace std;
int binary(int a[], int n, int low, int high, int key){
    while(high>=low){
        int mid=(high+low)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            high=mid-1;
        }
        else
        low=mid+1;
    }
    return -1;
}
int unboundedBinary(int a[], int key){
        if(a[0]==key){
            return 0;
        }
        int i=1;
        while(a[i]<key){
            i*=2;
        }
        if(a[i]==key){
            return i;
        }
        else
        return binary(a,i-1 - i/2+1,i/2+1,i-1,key);
}
int main(){
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<unboundedBinary(a,key);
    return 0;
}