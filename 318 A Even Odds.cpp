// http://codeforces.com/contest/318/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,k;
	std::ios::sync_with_stdio(false);
	cin>>n>>k;
if(n%2==0){
	if(k<=n/2)
		cout<<2*k-1;
	else{
		k=n-k;
		cout<<n-2*k;
	}
}
else{
	if(k<=n/2+1)
		cout<<2*k-1;
	else{
		k=n-k;
		cout<<n-2*k-1;
	}
}


	return 0;
}