#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int even=0,odd=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]%2==0) even++;
            else odd++;
        }
        int ans=even>odd?odd:even;
        cout<<ans<<endl;
    }
    return 0;
}