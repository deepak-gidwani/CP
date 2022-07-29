#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // int arr[n];
        int count=0;
        set<int> s;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(s.find(a)==s.end()){
                s.insert(a);
            }
            else count++;
        }
        if(count%2==0) cout<<s.size()<<endl;
        else cout<<s.size()-1<<endl;
    }
    return 0;
}