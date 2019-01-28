// http://codeforces.com/contest/71/problem/B
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

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,k,t;
	cin>>n>>k>>t;
	ll tot=n*k*t/100;
	
	for(int i=1;i<=n;i++){
		
		cout<<min(max(0,int(tot)),k)<<" ";
		tot-=k;
	}
	return 0;
}