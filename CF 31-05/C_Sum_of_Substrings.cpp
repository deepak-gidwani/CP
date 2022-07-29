#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int one=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') one++;
        }
        int count=0,count2=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){
                if(count<=k){
                    swap(s[i],s[n-1]);
                    k=k-count;
                    break;
                }
            }
            count++;
        }
        for(int i=0;i<n-1;i++){
            if(s[i]=='1'){
                if(count2<=k){
                    swap(s[i],s[0]);
                    break;
                }
            }
            count2++;
        }
        if(s[n-1]=='1' && s[0]=='1'){
            cout<<(one-2)*11 + 1 + 10<<" ";
        }
        else if(s[n-1]=='1' && s[0]!='1'){
            cout<<(one-1)*11 + 1<<" ";
        }
        else if(s[0]=='1' && s[n-1]!='1'){
            cout<<(one-1)*11 + 10<<" ";
        }
        else{
            cout<<11*one<<" ";
        }
        cout<<endl;
    }
    return 0;
}