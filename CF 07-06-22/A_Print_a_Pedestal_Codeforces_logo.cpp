#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=n/3;
        int y=n%3;
        if(y==0){
            cout<<x<<" "<<x+1<<" "<<x-1<<endl;
        }
        else if(y==1){
            if(x-2==0){
                cout<<x<<" "<<x+2<<" "<<x-1<<endl;
            }else{

                cout<<x+1<<" "<<x+2<<" "<<x-2<<endl;
            }
        }
        else{
            cout<<x+1<<" "<<x+2<<" "<<x-1<<endl;
        }
    }
    return 0;
}