#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll chk(ll a){
    ll count=0;
    while(a%2!=1){
        count++;
        a/=2;
    }
    return count;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        ll odd=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=0) odd++;
        }
        ll ans=INT_MAX;
        ll even=n-odd;
        if(odd!=0){
            cout<<even<<" ";
        }
        else{
            // ll mn=*(min_element(arr,arr+n));  // 16 18, en test case m fail ho jaega ye
            // while(mn%2!=1){
            //     min_op++;
            //     mn/=2;
            // }
            // cout<<min_op+n-1<<" ";
            for(int i=0;i<n;i++){
                if(arr[i]&1==1) continue;
                ans=min(ans,chk(arr[i]));
            }
            cout<<ans+n-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}