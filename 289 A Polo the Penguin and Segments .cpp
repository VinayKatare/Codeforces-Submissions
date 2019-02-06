// http://codeforces.com/contest/289/problem/A
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
ll n,k,cnt;int a,b;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cin>>n>>k;
	while(cin>>a>>b){
		cnt+=(b-a+1);
	}
	cout<<(k-cnt%k)%k;
	return 0;
}