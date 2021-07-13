#include<iostream>
using namespace std;
void rotateONOD(int a[], int n, int d){
        int temp[d];
        int j=0;
        for(int i=0;i<d;i++){
            temp[i]=a[i];
        }
        for(int i=d;i<n;i++){
            a[i-d]=a[i];
        }
        for(int i=n-d;i<n;i++){
            a[i]=temp[j];
            j++;
        }
        return;
}
void rotateONDO1(int a[], int n, int d){
    for(int i=0;i<d;i++){
        int temp=a[0];
        for(int i=0;i<n-1;i++){
            a[i]=a[i+1];
        }
        a[n-1]=temp;
    }
}
void reverse(int a[], int start, int end){
    while(start<=end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
}
void rotateONO1(int a[], int n, int d){
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
}
int main(){
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //rotateONOD(a,n,d);
    //rotateONDO1(a,n,d);
    rotateONO1(a,n,d);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    return 0;
}