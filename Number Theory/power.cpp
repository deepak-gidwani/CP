#include <iostream>
using namespace std;
int pw(int a,int b,int m){  // recursive sol
	if(b==0) return a%m;
	if(b%2==0){
		int t = pw(a,b/2,m);
		return (t *t %m);

	}
	else{
		int t=pw(a,(b-1)/2,m);
		t= ( t * t)%m;
		return (t*a)%m;
	}
}

int main() {
	// your code goes here   //tc=O(logb)
	int a,b,m;
	cin>>a>>b>>m;
	// int res=1;
	// while(b>0){   // iterative without modulas
	//     if(b&1 != 0){  // b is odd 
	//         res=res*a;
	//     }
	//     a=a*a;
	//     b=b>>1;  // b divide by 2
	// }
	cout<<pw(a,b,m);
	// cout<<res<<endl;
	// cout<<(a/b)%m<<endl;
	// a=a%m;
	// int inv_b=pw(b,m-2,m);
	// cout<<inv_b<<endl;
	// int res=(a * inv_b) % m;
	// cout<<res;
	return 0;
}
