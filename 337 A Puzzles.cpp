// http://codeforces.com/contest/337/problem/A
#include<bits/stdc++.h>
using namespace std;

#define all(a)                      a.begin(), a.end()
#define pb                          push_back
#define ll	long long int

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

int n,m;
cin>>m>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];

	sort(a,a+n);

int ans=INT_MAX;

for(int i=0;i<=n-m;i++){
	//cout<<a[i+m-1]-a[i]<<endl;
	ans=min(ans,a[i+m-1]-a[i]);

}
cout<<ans;
return 0;
}