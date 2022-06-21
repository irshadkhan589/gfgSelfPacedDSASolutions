#include<iostream>
#include<algorithm>
using namespace std;

// //1st solution with O(ND) and theta one auxillary space
// void leftByOne(int a[], int n){
//     int temp=a[0];
//     for(int i=1;i<n;i++){
//         a[i-1]=a[i];
//     }
//     a[n-1]=temp;
// }
// void leftByDOND(int a[], int n, int d){
//     for(int i=0;i<d;i++){
//         leftByOne(a,n);
//     }
// }
// //2nd solution with O(N) complexity and theta d auxillary space
// void leftByDON(int a[], int n, int d){
//     int aux[d];
//     for(int i=0;i<d;i++){
//         aux[i]=a[i];
//     }
//     for(int i=d;i<n;i++){
//         a[i-d]=a[i];
//     }
//     for(int i=0;i<d;i++){
//         a[n-d+i]=aux[i];
//     }
// }
//3rd solution using reversal
void leftByDReversal(int a[], int n, int d){
    reverse(a,a+d);
    reverse(a+d,a+n);
    reverse(a,a+n);
}
int main(){
      int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // //call to 1st solution
    // leftByDOND(a,n,d);
    // //call to 2nd solution
    // leftByDON(a,n,d);
    //call to 3rd solution
    leftByDReversal(a,n,d);
     for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
}