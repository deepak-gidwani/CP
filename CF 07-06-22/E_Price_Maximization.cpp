#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    // cout<<0%12;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<bool> visited(n,0);
        int weight=0;
        for(int i=0;i<n;i++){
            for(int j=n-1;j>i;j--){
                if((arr[i]+arr[j])%k==0 && visited[j]==0 && visited[i]==0){
                    visited[i]=1;
                    visited[j]=1;
                    weight+=(arr[i]+arr[j])/k;
                    break;
                }
            }
        }
        // cout<<weight<<" ";
        vector<int> arr2;
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                arr2.push_back(arr[i]);
            }
        }
        // for(auto x:arr2) cout<<x<<" ";
        sort(arr2.begin(),arr2.end());
        for(int i=0,j=(int)arr2.size()-1;i<j;i++,j--){
            while((arr2[i]+arr2[j])/k < 1 && i<j) i++;
            if(i==j) break; 
            // cout<<arr[i]<<" "<<arr[j];
            weight+=(arr2[i]+arr2[j])/k;
        }
        // visited.resize(arr2.size());
        // fill(visited.begin(),visited.end(),0);
        // for(int i=0;i<arr2.size();i++){
        //     for(int j=arr2.size()-1;j>i;j--){
        //         if((arr2[i]+arr2[j])/k>0 && visited[j]==0 && visited[i]==0){
        //             visited[i]=1;
        //             visited[j]=1;
        //             weight+=(arr2[i]+arr2[j])/k;
        //             break;
        //         }
        //     }
        // }
        // for(int i=0;i<arr2.size();i++){
        //     if(visited[i]==0){

        //     }
        // }
        cout<<weight<<endl;
    }
    return 0;
}