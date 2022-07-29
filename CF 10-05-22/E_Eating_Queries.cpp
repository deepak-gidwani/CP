#include<bits/stdc++.h>
using namespace std;
int check(vector<int> &arr,int query,int n){
    int l=0,h=n-1,ans=-1;
    if(n==1){
        if(query<=arr[0]) return 1;
        else return -1;
    }
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==query) return mid+1;
        else if(query<arr[mid]){
            ans=mid+1;
            h=mid-1;
        }
        else l=mid+1;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        long long int total=0;
        cin>>n>>q;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            total+=arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int>());
        for(int i=1;i<n;i++){
            arr[i]+=arr[i-1];
        }
        // reverse(arr.begin())
        while(q--){
            int query;
            bool flag=true;
            cin>>query;
            int count=0;
            if(query>total) cout<<-1<<endl;
            else{
                // for(int i=0;i<n;i++){
                //     query-=arr[i];
                //     count++;
                //     if(query<=0){
                //         cout<<count<<endl;
                //         flag=false;
                //         break;
                //     }
                // }
                // if(flag==true) cout<<-1<<endl;
                cout<<check(arr,query,n)<<endl;

            }
        }

    }
    return 0;
}