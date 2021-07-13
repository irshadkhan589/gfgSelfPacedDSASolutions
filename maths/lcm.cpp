#include<iostream>
using namespace std;
int gcdNaiveApproach(int num1, int num2){
    int mini= min(num1,num2);
    for(int i=mini;i>0;i--){
        if (( num1 % i==0 && num2 % i==0))
        {
            return i;
        }
    }
    return 1;
}
int gcdSubtractionApproach(int num1, int num2){
      while(num1 != num2)
    {
        if(num1>num2){
            num1-=num2;
        }        
        else{
            num2-=num1;
        }
    }
        return num1;
}
int gcdEuclideanApproach(int num1, int num2){
        if(num1==0){
            return num2;
        }
        return gcdNaiveApproach(num2%num1,num1);
}
int lcmNaiveApproach(int num1,int num2){
    return num1*num2/gcdNaiveApproach(num1,num2);
}
int lcmSubtractionApproach(int num1,int num2){
    return num1*num2/gcdSubtractionApproach(num1,num2);
}
int lcmEuclideanApproach(int num1,int num2){
    return num1*num2/gcdEuclideanApproach(num1,num2);
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<lcmNaiveApproach(num1,num2)<<endl;
    cout<<lcmSubtractionApproach(num1,num2)<<endl;
    cout<<lcmEuclideanApproach(num1,num2)<<endl;
    return 0;
}