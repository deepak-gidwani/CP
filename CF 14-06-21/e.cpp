#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int> arr(n);
        int oursum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1) oursum++;
        }
        int length=INT_MIN;
        if(s>oursum){
            cout<<-1<<endl;
            continue;
        }
        else if(s==oursum){
            cout<<0<<endl;
            continue;
        }
        else{
            int l=0,r=0;
            int sum=0;
            while(sum!=r){
                sum+=arr[r];
                r++;
            }
            length=max(length,r-l+1);
            for(int i=r+1;i<n;i++){
                sum+=arr[i];
                while(sum>s){
                    sum-=arr[l];
                    l++;
                }
                length=max(length,i-l+1);
            }
        }
        cout<<length<<endl;
    }
    return 0;
}