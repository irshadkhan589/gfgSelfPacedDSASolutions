#include<iostream>
using namespace std;
int longEvOdON(int a[], int n){
    int count =1;
    int result=1;
    for(int i=1;i<n;i++){
        if((a[i]%2==0 && a[i-1]%2!=0)||a[i]%2!=0 && a[i-1]%2==0){
            count++;
            result=max(result,count);
        }
        else
        count=1;
    }
    return result;
}
int longEvOdONN(int a[],int n){
    int result=1;
    int count=1;
    for(int i=0;i<n;i++){
        count=1;
        for(int j=i+1;j<n;j++){
        if(a[j]%2==0 && a[j-1]%2!=0){
            count++;
        }
        else if(a[j]%2!=0 && a[j-1]%2==0){
            count++;
        }
        else
        break;
    }
    result=max(result,count);
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<longEvOdON(a,n)<<endl;
    cout<<longEvOdONN(a,n)<<endl;
    return 0;
}