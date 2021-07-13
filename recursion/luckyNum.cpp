#include<iostream>
using namespace std;
 int counter = 2;
bool isLucky(int n) {
int k=n;
if(counter>n)
return 1;
if (n % counter == 0)
return 0;
k=k-(k/counter);
counter++;
return isLucky(k);
}
int main(){
        int t;
        cin>>t;
        while(t){
        int n;
        cin>>n;
        cout<<isLucky(n)<<endl;
        t--;
        }
    return 0;
}