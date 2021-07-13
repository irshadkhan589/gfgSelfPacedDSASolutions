#include<iostream>
using namespace std;
int noOfSetBitsNaive(int n){
    int count=0;
    while(n>0){
        if(n&1){
            count++;
        }
        n>>=1;
    }
    return count;
}

//Lookup Table Method
//First Divide 32 bits into 4 parts of 8 bits each, 8 bits can contain 0 to pow(2,7)-1or upto 255 if all the 8 bits are set
//Create a table containing all the counts from 0 to 255
int table[256];
// recursive function to count set bits 
	void calculate() { 

      // To initially generate the table algorithmically:
      table[0] = 0;
      for (int i = 0; i < 256; i++)
      {
          table[i] = (i & 1) + table[i / 2];
      }
	} 
	
	int lookupCount(int n)
	{
        int res=table[n&255];
        n>>=8;
        res+=table[n&255];
        n>>=8;
        res+=table[n&255];
        n>>=8;
        res+=table[n&255];
        
        return res;
	}


int brianKerningham(int n){
    int count=0;
    while(n!=0){
        n=n&n-1;
        count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    calculate();
    cout<<noOfSetBitsNaive(n)<<endl;
    cout<<brianKerningham(n)<<endl;
    cout<<lookupCount(n)<<endl;
    return 0;
}