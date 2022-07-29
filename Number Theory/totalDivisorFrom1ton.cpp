#include<bits/stdc++.h>
using namespace std;
void countDiv(int n){   // method1 tc=O(n root(n))
    int count=0;  // n m kitne 
    for(int i=1;i*i<=n;i++){
        if(n%i==0) count++;
        if(i!=(n/i)) count++;
    }
    cout<<count<<endl;
}
void countDiv2(int n){  //method2 tc=O(nlogn) better than method1
    vector<int> div(n+1,0);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            div[j]++;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<div[i]<<endl;  // div[i]==2 mtlb vo prime number hai
    }
}
int main(){
    int n;
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     countDiv(i);
    // }
   countDiv2(n);

    return 0;
}