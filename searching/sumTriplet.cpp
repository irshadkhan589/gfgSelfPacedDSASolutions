#include<iostream>
#include<algorithm>
using namespace std;
bool isTripletNaive(int a[], int n, int key){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==key){
                    return true;
                }
            }
        }
    }
    return false;
}
bool isTripletOptimised(int a[], int n, int key){
    sort(a,a+n);
    for(int i=0;i<n;i++){
        int start=i+1;
        int end=n-1;
        while(start<end){
            if(a[start]+a[end]==key-a[i]){
                return true;
            }
            else if(a[start]+a[end]>key-a[i]){
                end--;
            }
            else
            start++;
        }
    }
    return false;
}
int main(){
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<isTripletNaive(a,n,key)<<endl;
    cout<<isTripletOptimised(a,n,key)<<endl;
    return 0;
}