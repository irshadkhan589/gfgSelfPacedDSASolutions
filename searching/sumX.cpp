#include<iostream>
using namespace std;
void sumXNaive(int a[], int n, int key){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]+a[j]==key){
                cout<<i<<' '<<j<<endl;
            }
        }
    }
} 
void sumX(int a[], int n, int key){
    int i=0;
    int j=n-1;
    while(i<j){
        if(a[i]+a[j]==key){
            cout<<i<<' '<<j<<endl;
            return;
        }
        else if(a[i]+a[j]>key){
            j--;
        }
        else if(a[i]+a[j]<key){
            i++;
        }
    }
    
}
int main(){
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sumXNaive(a,n, key);
    sumX(a,n,key);
    return 0;
}