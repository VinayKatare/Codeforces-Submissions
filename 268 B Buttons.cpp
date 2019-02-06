// http://codeforces.com/contest/268/problem/B
#include<bits/stdc++.h>
using namespace std;

#define all(a)                      a.begin(), a.end()
#define pb                          push_back
#define ll	long long int

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
ios_base::sync_with_stdio(0);
cin.tie(0);

int n;
cin>>n;
ll sum=0;
for(int i=2;i<=n;i++){
	sum=sum+i*(i-1)/2;
}
cout<<sum+n;
return 0;
}