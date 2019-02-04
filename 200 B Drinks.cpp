// http://codeforces.com/contest/200/problem/B
#include<bits/stdc++.h>
using namespace std;
int main(){
	double n,x;
	double sum=0;
	
	cin>>n;

	while(cin>>x)
		sum=sum+x;

	cout<<std::setprecision(12)<<sum/n;
	return 0;
}