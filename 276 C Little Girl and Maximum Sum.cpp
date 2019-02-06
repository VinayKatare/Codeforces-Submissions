// http://codeforces.com/contest/276/problem/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define all(a)                      a.begin(), a.end()
#define pb                          push_back
#define ll							long long
#define index(a)            		order_of_key(a)
#define value(a)					find_by_order(a)
#define count_1 					__builtin_popcount
#define mod(x, m)					((((x) % (m)) + (m)) % (m))
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
ll a[1000000],b[1000000];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
	#endif
	int n,m,x,y;
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n,greater<int>());
	while(m--){
		cin>>x>>y;
		x--,y--;
		b[x]++;
		b[y+1]--;
	}
	for(int i=1;i<n;i++)b[i]+=b[i-1];
	sort(b,b+n,greater<int>());
	
	ll sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i]*b[i];
		//cout<<a[i]<<" "<<b[i]<<endl;
	}
	cout<<sum;
	return 0;
}