// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;  // tarika == maximum length subarray
//     while(t--){
//         int n,s;
//         cin>>n>>s;
//         vector<int> arr(n);
//         int oursum=0;
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//             if(arr[i]==1) oursum++;
//         }
//         int length=INT_MIN;
//         if(s>oursum){
//             cout<<-1<<endl;
//             continue;
//         }
//         else if(s==oursum){
//             cout<<0<<endl;
//             continue;
//         }
//         else{
//             int l=0,r=0;
//             int sum=0;
//             while(sum!=s){
//                 sum+=arr[r];
//                 r++;
//             }
//             length=max(length,r-l);
//             for(int i=r;i<n;i++){
//                 sum+=arr[i];
//                 while(sum>s){
//                     sum-=arr[l];
//                     l++;
//                 }
//                 length=max(length,i-l+1);
//             }
//         }
//         cout<<n-length<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int oursum=0;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1) oursum++;
        }
        int count=0;
        if(s>oursum){
            cout<<-1<<endl;
            continue;
        }
        else if(s==oursum){
            cout<<0<<endl;
            continue;
        }
        else{
            int i=0,j=n-1;
            while(i<n && j>-1){
                // cout<<i<<" "<<j<<" "<<count<<" "<<endl;
                int dis_i=1,dis_j=1;
                int ichk=i,jchk=j;
                while(arr[i]!=1 && i<n){
                    dis_i++;
                    i++;
                }
                while(arr[j]!=1 && j>-1){
                    dis_j++;
                    j--;
                }
                if(dis_i>=dis_j){
                    oursum--;
                    count+=dis_j;
                    j--;
                    i=ichk;
                }
                else{
                    oursum--;
                    count+=dis_i;
                    i++;
                    j=jchk;
                }
                if(oursum==s) break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}