#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,z;
        cin>>n>>z;
        long long int arr[n],ans=INT32_MIN;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            long long int y = arr[i]|z;
            ans=max(ans,y);
        }
        cout<<ans<<endl;
    }
    return 0;
}