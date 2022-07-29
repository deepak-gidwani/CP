#include<bits/stdc++.h>
using namespace std;
//tc=log(max(a,b))
int gcd(int a,int b){  // a must be greater than b
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main(){
    cout<<gcd(10,2);
    cout<<__gcd(2,10); // inbuilt cpp fxn
    return 0;
}