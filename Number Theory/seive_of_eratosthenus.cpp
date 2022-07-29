#include<bits/stdc++.h>
using namespace std;  //tc=O(nloglogn)
int main(){
    int n=100;
    vector<bool> prime(n+1,1);
    for(int i=2;i*i<=n;i++){
        if(prime[i]==1){
            for(int j=i*i;j<=n;j+=i){  
                prime[j]=0;
            }
        }
    }
    for(int i=2;i<n+1;i++){
        cout<<i<<" "<<prime[i]<<endl;
    }
    return 0;
}