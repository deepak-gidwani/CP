#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char arr[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>arr[i][j];
            }
        }
        
        vector<pair<int,pair<int,int>>> ans;
        for(int i=0;i<8;i++){
            int count=0;
            int j=0;
            int op=0;
            bool flag=1;
            for(;j<8;j++){
                if(arr[i][j]=='#'){
                    count++;
                }
                if(count==1 && flag){
                    op=j;
                    flag=0;
                }

            }
            if(count==2){
            ans.push_back({count,{i+1,j+1}});
            }
            else{
                ans.push_back({1,{i+1,op+1}});
            }
        }
        for(int i=1;i<(int)ans.size()-1;i++){
            if(ans[i].first==1 && ans[i-1].first==2 && ans[i+1].first==2){ cout<<ans[i].second.first<<" "<<ans[i].second.second<<endl;break;}
        }
    }
    return 0;
}