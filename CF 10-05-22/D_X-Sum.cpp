#include<bits/stdc++.h>
using namespace std;
int check(vector<vector<int>> &arr,int n,int m,int i,int j){
    int x=i,y=j;
    int ans=0;
    while(i<n && j<m){
        ans+=arr[i][j];
        i++;
        j++;
    }
    i=x;
    j=y;
    while(i<n && j>=0){
        ans+=arr[i][j];
        i++;
        j--;
    }
    i=x;
    j=y;
    while(i>=0 && j<m){
        ans+=arr[i][j];
        i--;
        j++;
    }
    i=x;
    j=y;
    while(i>=0 && j>=0){
        ans+=arr[i][j];
        i--;
        j--;
    }
    ans-=arr[x][y]*3;
    // cout<<ans<<endl;
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>n>>m;
        vector<vector<int>> arr;
        for(int i=0;i<n;i++){
            vector<int> temp(m);
            for(int j=0;j<m;j++){
                cin>>temp[j];
            }
            arr.push_back(temp);
        }
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans=max(ans,check(arr,n,m,i,j));
                // cout<<i<<" "<<j;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}