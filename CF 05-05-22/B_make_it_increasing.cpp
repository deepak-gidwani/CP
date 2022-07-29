#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=n-1;i>=1;i--){
            int j=i;
            while(arr[j]<=arr[j-1] && arr[j-1]!=0){
                arr[j-1]=arr[j-1]/2;
                count++;
            }
        }
        bool flag=true;
        for(int i=0;i<n-1;i++){
            if(arr[i]>=arr[i+1]){
                flag=false;
                break;
            }
        }
        if(flag==false) cout<<"-1"<<endl;
        else cout<<count<<endl;
    }
    return 0;
}