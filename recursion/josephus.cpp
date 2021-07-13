#include<iostream>
using namespace std;
// josephus problem for n  people and kth person gets killed
// suppose there are 7 peoples and 3rd person gets killed each round
// lets begin count with 0
// 0  1  2  3  4  5  6
// 2 gets killed, starting from 0
// now gun is transferred to 3
// 3  4  5  6  0  1       line x
// now 5 is killed
// 6  0  1  3  4
// 3  4  6  0
// 0  3  4
// 0  3
// 3
// 3 is the answer
// jump to line x, after killing a person n-1 person remains but k remains same always
// when gun is transferred to 3, 3 becomes the 0th person, 4 becomes 1st and so
// 0  1  2  3  4  5        line y , now problem is reduced for n-1 and y can be converted to x using formula    x=(y+k)%n and returned
int josephus(int n, int k){
    if(n==1){
        return 0;
    }
    return (josephus(n-1,k)+k)%n;
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<josephus(n,k)<<endl;
    return 0;
}