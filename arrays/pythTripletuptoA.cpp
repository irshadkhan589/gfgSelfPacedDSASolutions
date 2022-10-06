// This is a wrong answer, trial

#include<bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> squares,int key){
    bool flag = false;
    for(int i = 0;i<squares.size()-1;i++){
        if(squares[i]==key){
            flag = true;
        }
    }
    if(flag == true){
        return true;
    }
    else{
        return false;
    }
}

int solve(int A) {
    vector<int> squares;
    for(int i =1;i<=A;i++){
        squares.push_back(i*i);
    }   
    int count = 0;
    for(int i =0;i<squares.size();i++){
        for(int j = i+1;j<squares.size();j++){
            if(linearSearch(squares,squares[i]+squares[j])){
                count++;
            }
        }
    }
    return count+1;
}
int main(){
    int A;
    cin>>A;
    cout<<solve(A)<<endl;
    return 0;
}