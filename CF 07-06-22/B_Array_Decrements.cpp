#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        bool flag=1;
        int mx1=*(max_element(a,a+n));
        int mx2=*(max_element(b,b+n));
        int diff=mx1-mx2;
        if(diff<0){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            a[i]-=diff;
        }
        for(int i=0;i<n;i++){
            if(a[i]<0) a[i]=0;
        }
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]) flag=0;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}