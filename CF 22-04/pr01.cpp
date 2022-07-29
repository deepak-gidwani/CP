#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length()-1;i++){
        while(s[i]==s[i+1] && i<s.length()-1){
            count++;
            i++;
        }
        if(count==0){
            cout<<"no"<<endl;
            return;
        }
        count=0;
    }
    cout<<"yes"<<endl;

    // size_t found=s.find("aba");
    // size_t found2=s.find("bab");
    // if(s.length()==1){
    //     cout<<"no"<<endl;
    //     return;
    // }
    // else if(s.length()==2 && (s=="ab" || s=="ba")){
    //     cout<<"no"<<endl;
    //     return;
    // }
    // else if(found!=string::npos) {
    //     cout<<"no"<<endl;
    //     return;
    // }
    // else if(found2!=string::npos){
    //     cout<<"no"<<endl;
    //     return;
    // }
    // else if(s[s.length()-1]!=s[s.length()-2]){
    //     cout<<"no"<<endl;
    //     return;
    // }
    // else{
    //     cout<<"yes"<<endl;
    //     return;
    // }


//     int count=0;
//     for(int i=0;i<s.length();i++){
//         while(s[i]=='a' && i<s.length()){
//             i++;
//             count++;
//         }
//         if(count==1){
//             cout<<"no"<<endl;
//             return;
//         }
//         count=0;
//         while(s[i]=='b' && i<s.length()){
//             count++;
//             i++;
//         }
//         if(count==1){
//             cout<<"no"<<endl;
//             return;
//         }
//     }
//     cout<<"yes"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}