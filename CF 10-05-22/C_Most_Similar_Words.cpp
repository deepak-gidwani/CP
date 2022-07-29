#include<bits/stdc++.h>
using namespace std;
int diff(string &s1,string &s2,int m){
    int difference =0;
    for(int i=0;i<m;i++){
        difference+=abs(s1[i]-s2[i]);
        // cout<<s1[i]-s2[i];
    }
    return difference;
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s[n];
        int mn = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                mn=min(mn,diff(s[i],s[j],m));
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}