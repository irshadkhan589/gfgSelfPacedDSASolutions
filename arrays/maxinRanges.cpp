// //start
// #include<iostream>
// #include<climits>
// using namespace std;
// int maxOccured(int L[], int R[], int n){
//     int maxx=1000000;
//     int a[maxx+1];
//     for(int i=0;i<=maxx;i++){
//         a[i]=0;
//     }
//     for(int i=0;i<n;i++){
//         a[L[i]]++;
//         a[R[i]+1]--;
//     }
//     int maxSum=a[0];
//     int id;
//     for(int i=1;i<=maxx;i++){
//         a[i]+=a[i-1];
//         if(a[i]>maxSum){
//             maxSum=a[i];
//             id=i;
//         }
//     }
//     return id;
// }
// int main(){
//     int n;
//     cin>>n;
//     int L[n];
//     int R[n];
//     for(int i=0;i<n;i++){
//         cin>>L[i];
//     }
//     for(int j=0;j<n;j++){
//         cin>>R[j];
//     }
//     cout<<maxOccured(L,R,n)<<endl;
//     return 0;
// }
// //end
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n]={0};
    for(int element : a){
        cout<<element<<' ';
    }
return 0;
}
