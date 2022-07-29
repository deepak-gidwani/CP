#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=(1<<30)-1;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;   
            if(temp!=i){   // minimum &ing gives maximum ans
                x&=temp;
            }
        }
        cout<<x<<endl;

    }
    return 0;
}