#include<bits/stdc++.h>
using namespace std;
#define ll long long
unsigned int getFirstSetBitPos(int n)
{
    return log2(n & -n) + 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        if(__builtin_popcount(x)==1){
            if(x==1) cout<<3<<" ";
            else cout<<x+1<<" ";
        }
        else{
            int z=getFirstSetBitPos(x);
            int ans = 1<<z-1;
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}