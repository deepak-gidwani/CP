#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        bool flag=true;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(auto x:m){
            if(x.second<2)flag=false;
            // cout<<x.first<<" "<<x.second<<endl;
        }
        if(flag==false){
            cout<<-1<<endl;
            continue;
        }
        int arr2[n];
        for(int i=0;i<n;i++){
            arr2[i]=i+1;
            // cout<<arr2[i];
        }
        for(int i=0;i<n;){
            int l=i;
            while(arr[l]==arr[l+1] && l<n-1){    
                l++;
            }
            // cout<<l<<endl;
            rotate(arr2+i,arr2+l,arr2+l+1);
            l++;
            i=l;
        }
        for(auto x:arr2){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}