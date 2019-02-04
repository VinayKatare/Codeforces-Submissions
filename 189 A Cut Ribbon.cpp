// http://codeforces.com/contest/189/problem/A
#include<bits/stdc++.h>
using namespace std;
int dp[100000];
int fn(int n,int a,int b,int c){
if(n<0)
	return INT_MIN;
if(n==0)
	return 0;
if(dp[n])
	return dp[n];
return dp[n]=1+max(fn(n-a,a,b,c),max(fn(n-b,a,b,c),fn(n-c,a,b,c)));
}
int main(){

int n,a,b,c;

cin>>n>>a>>b>>c;

cout<<fn(n,a,b,c);
	return 0;
}