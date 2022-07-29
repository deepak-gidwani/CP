#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int min_candies = *(min_element(arr,arr+n));
        int ans=0;
        for(int x:arr){
            if(x>min_candies){
                ans+=x-min_candies;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}