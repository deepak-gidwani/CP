#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int s1,s2;
        s1=(int)s[0]+(int)s[1]+(int)s[2] - 3*48;
        s2=(int)s[3]+(int)s[4]+(int)s[5] - 3*48;
        if(s1==s2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}