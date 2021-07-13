#include<iostream>
using namespace std;
    int mmiNaive(int a, int m){
     int i,t;
        for(i=1;i<m;i++){
            if (((a%m) * (i%m)) % m == 1){
                t=1;
                break;
            }
        }
        if(t==1){
            return i;
        }
        else{
            return -1;
        }
    }

int main(){
    int a,m;
    cin>>a>>m;
    cout<<mmiNaive(a,m)<<endl;
    return EXIT_SUCCESS;
}
