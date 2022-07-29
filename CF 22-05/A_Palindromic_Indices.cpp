#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int count=1,n;
        cin>>n;
        cin>>s;
        // int n=s.length();
        if(n%2==0){
            for(int i=n/2-1;i>0;i--){
                if(s[i]!=s[i-1]) break;
                count++;
            }
            cout<<2*count<<endl;
        }
        else{
            count=0;
            for(int i=n/2;i>0;i--){
                if(s[i]!=s[i-1]) break;
                count++;
            }
            cout<<2*count+1<<endl;
        }
    }
    return 0;
}