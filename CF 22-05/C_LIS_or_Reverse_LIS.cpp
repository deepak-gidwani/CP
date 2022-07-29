#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(auto &x:arr){
            cin>>x;
        }
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        int freqGreater2 = 0;
        int freEqual1=0;
        for(auto x: m){
            if(x.second>=2) freqGreater2++;
            else freEqual1++;
        }
        int remaining = freEqual1-freEqual1/2;
        cout<<min(freqGreater2+freEqual1,freqGreater2+remaining)<<endl;
    }
    return 0;
}