#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int arr[n-1];
    vector<pair<int,int>> p(n-1);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        p[i].first=i+2;
        p[i].second=arr[i];
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    if(n==1){
        cout<<1<<" "<<2;
        return 0;
    }
    vector<int> temp;
    pair<int,int> * point = &p[n-2];
    while(point->second!=1){
        temp.push_back(point->first);
        point = &p[point->second-2];
    }
    temp.push_back(point->first);
    temp.push_back(1);
    reverse(temp.begin(),temp.end());
    for(auto x:temp) cout<<x<<" ";
    return 0;
}