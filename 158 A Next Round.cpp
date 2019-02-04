// http://codeforces.com/contest/158/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,x,cnt=0,a,sum=0;
	vector<int> v;

	std::ios::sync_with_stdio(false);
	cin>>n>>k;

	for(int i=0;i<n;i++){
		cin>>x;
		sum+=x;
		v.push_back(x);
	
	}
	if(sum==0)
		{cout<<0;exit(0);}
	

a=v[k-1];

	for(int i=0;i<n;i++){
		if(v[i]>=a && v[i]!=0)
			cnt++;
	}

cout<<cnt;

	return 0;
}