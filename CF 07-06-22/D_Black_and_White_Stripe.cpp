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
        string sub;
        sub=s.substr(0,k);
        int black=0,white=0;
        for(int i=0;i<k;i++){
            if(s[i]=='B') black++;
            else white++;
        }
        int white_in_sub=white;
        for(int i=k;i<n;i++){
            if(s[i]=='W'){
                white++;
            }
            if(s[i-k]=='W') white--;
            white_in_sub=min(white,white_in_sub);
        }
        cout<<white_in_sub<<endl;
    }
    return 0;
}