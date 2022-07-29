#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[4];
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
        int count=0;
        for(int i=1;i<4;i++){
            if(arr[i]>arr[0]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}