#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<map<int,char>> subtree;
        int n;
        string s;
        cin>>n;
        int arr[n-1];
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }
        cin>>s;
        for(int i=0;i<n;i++){
            subtree[i][1]=s[0];
            
        }
    }
    return 0;
}