// http://codeforces.com/contest/131/problem/B
#include<bits/stdc++.h>
using namespace std;
#define all(a)                      a.begin(), a.end()
#define pb                          push_back
#define ll	long long int
map<int,ll> m;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
ll n,x,sum=0;
cin>>n;

while(cin>>x){
	m[x]++;
}

for(int i=1;i<=10;i++){
	sum=sum+m[i]*m[-i];
}

cout<<sum+(m[0]*(m[0]-1)/2);
return 0;
}