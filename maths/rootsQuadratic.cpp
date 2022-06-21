#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
 vector<int> quadraticRoots(int a, int b, int c) {
    vector<int> roots={0};
    int d = b*b - 4*a*c;
    double rootd=sqrt(abs(d));
    if(d<0){
        cout<<"Imaginary"<<endl;
        roots.push_back(-1);
        return roots;
    }          
    else if(d==0){
        int r1=-0.5*double(b)/double(a);
        roots.push_back(r1);
        return roots;
    }
    else{
        // roots.push_back(double(-b+rootd)/double(2*a));
        // roots.push_back(double(-b-rootd)/double(2*a));
        // sort(roots.begin(), roots.end(), greater<int>());
        roots.push_back(1);
        return roots;
    }
    }
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> roots= quadraticRoots(a,b,c);
    cout<<roots[0];    
    return 0;
}