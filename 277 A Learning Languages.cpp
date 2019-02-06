// http://codeforces.com/contest/277/problem/A
#include<bits/stdc++.h>
using namespace std;

#define all(a)                      a.begin(), a.end()
#define pb                          push_back
#define ll	long long int
vector<int> e[205];
bool visited[205];
void dfs(int u){
	visited[u]=1;
	for(auto x:e[u]){
		if(!visited[x])
		dfs(x);
	}
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n,m,x,t,k=0;
cin>>n>>m;
for(int i=1;i<=n;i++){
	cin>>x;
	if(x==0)k++;
	for(int j=0;j<x;j++){
		cin>>t;
		e[i].pb(t+n);
		e[t+n].pb(i);
	}
}
int cnt=0;
for(int i=1;i<=n;i++){
	if(!visited[i]){
		dfs(i);
		cnt++;
	}
}
if(k==n)cout<<k;
else
cout<<cnt-1;
return 0;
}