#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        bool flag=true;
        int n,m;
        cin>>n>>m;
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int x,y;
        for(int i=0;i<n;i++){
            size_t nearest = s[i].find('R');
            if(nearest == string::npos) continue;
            else{
               x=i;
               y=nearest;
               break; 
            }
        }
        for(int i=x+1;i<n;i++){
            for(int j=0;j<y;j++){
                if(s[i][j]=='R'){
                    cout<<"NO"<<endl;
                    flag=false;
                    break;
                }
            }
            if(flag==false) break;
        }
        if(flag!=false) cout<<"YES\n";
    }
    return 0;
}