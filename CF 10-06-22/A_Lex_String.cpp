#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        string a,b;
        cin>>a>>b;
        string c;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int ak=0,bk=0;
        int i=0,j=0;
        while(i<a.length() && j<b.length()){
            if(a[i]<b[j] && ak<k){
                c.push_back(a[i]);
                ak++;
                bk=0;
                i++;
            }
            else if(b[j]<a[i] && bk<k){
                c.push_back(b[j]);
                bk++;
                ak=0;
                j++;
            }
            else{
                if(a[i]<b[j]){
                    c.push_back(b[j]);
                    ak=0;
                    j++;
                }
                else{
                    c.push_back(a[i]);
                    bk=0;
                    i++;
                }
            }
        }
        cout<<c<<endl;
        // vector<int> s1(25,0),s2(25,0);
        // for(int i=0;i<a.length();i++){
        //     s1[a[i]-97]++;
        // }
        // for(int i=0;i<b.length();i++){
        //     s2[b[i]-97]++;
        // }
        // int l1=a.length(),l2=b.length();
        // while(l1!=0 && l2!=0){
        //     for(int i=0;i<26;i++){
        //         if(s1[i]>0){
                    
        //         }
        //     }
        // }
    }
    return 0;
}