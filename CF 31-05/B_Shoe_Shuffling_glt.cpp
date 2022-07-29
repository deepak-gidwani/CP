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
        int mx=*(max_element(arr,arr+n));
        unordered_map<int,int> m;
        vector<pair<int,int>> p(mx+1,{0,0});
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(auto x:m){
            if(x.second<2) flag=false;
        }
        if(flag==false){
            cout<<-1<<endl;
            break;
        }
        for(int i=0;i<=mx;i++){
            if(p[arr[i]].first==0){
                p[arr[i]].first=i+1;
            }
            if(p[arr[i]].first!=0 && p[arr[i]].second==0){
                p[arr[i]].second=i+1;
            }
        }
        cout<<"dds";
        // vector<int> arr2(n,0);
        // for(int i=0;i<=mx;i++){
        //     if(p[i].first!=0){
        //         arr[p[i].first]=p[i].second;
        //         arr[p[i].second]=p[i].first;
        //     }
        // }
        // for(auto x:arr2){
        //     cout<<x<<" ";
        // }
        cout<<endl;
    }
    return 0;
}