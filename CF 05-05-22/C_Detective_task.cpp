#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        size_t found1 = s.find('0');
        size_t found2 = s.rfind('1');
        int lzero = found1!=string::npos?found1:s.length()-1;
        int rone = found2!=string::npos?found2:0;
        cout<<lzero - rone + 1<<endl;
    }
    return 0;
}