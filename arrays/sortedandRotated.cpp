#include<iostream>
#include<climits>
using namespace std;
bool isIncreasing(int a[], int n){
    int minimumGuy=INT_MAX;
    int indexOfMinimumGuy=0;
    for(int i=0;i<n;i++){
        if(a[i]<minimumGuy){
            minimumGuy=a[i];
            indexOfMinimumGuy=i;
        }
    }
    bool flag1=true;
    for(int i=1;i<indexOfMinimumGuy;i++){
        if(a[i]<a[i-1]){
            flag1= false;
            break;
        }
    }
    bool flag2=true;
    for(int i=indexOfMinimumGuy+1;i<n;i++){
        if(a[i]<a[i-1]){
            flag2= false;
            break;
        }
    }
    if(flag1&&flag2&&a[0]>a[n-1])
    return true;
    else
    return false;
}


bool isDecreasing(int a[], int n){
       int maximumGuy=INT_MIN;
    int indexOfMaximumGuy=0;
    for(int i=0;i<n;i++){
        if(a[i]>maximumGuy){
            maximumGuy=a[i];
            indexOfMaximumGuy=i;
        }
    }
    bool flag1=true;
    for(int i=1;i<indexOfMaximumGuy;i++){
        if(a[i]>a[i-1]){
            flag1= false;
            break;
        }
    }
    bool flag2=true;
    for(int i=indexOfMaximumGuy+1;i<n;i++){
        if(a[i]>a[i-1]){
            flag2= false;
            break;
        }
    }
    if(flag1&&flag2&&a[0]<a[n-1])
    return true;
    else
    return false;
    return false;
}


bool isSortedRotated(int a[], int n){
    return isIncreasing(a,n)||isDecreasing(a,n);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<isSortedRotated(a,n)<<endl;
    return 0;
}