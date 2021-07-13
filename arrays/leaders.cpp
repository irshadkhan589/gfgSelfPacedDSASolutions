#include<iostream>
using namespace std;
//optimised solution, traverse the elements from right to left
void leadersON(int a[], int n){
        int leader = a[n-1];
        cout<<leader<<' ';
        for(int i=n-2;i>=0;i--){
            if(a[i]>leader){
                leader=a[i];
                cout<<leader<<' ';
            }
        }
        cout<<endl;
}
// //naive solution
// void leadersONN(int a[], int n){
//     int aux[n];
//     int k=0;
//     for(int i=0;i<n-1;i++){
//         bool flag = true;
//             for(int j=i+1;j<n;j++){
//                 if(a[j]>=a[i])
//                 flag = false;
//                 break;
//         }
//         if(flag){
//             aux[k]=a[i];
//             k++;
//         }
//     }
//     aux[k]=a[n-1];
//     for(int i=0;i<=k;i++){
//         cout<<aux[i]<<' ';
//     }
//     cout<<endl;
// }
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // //naive solution
    // leadersONN(a,n);
    //optimised solution
    leadersON(a,n);
    return 0;
}