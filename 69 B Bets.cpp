// http://codeforces.com/contest/69/problem/B
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
int res[101];
int tim[101];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,l,r,t,c;
	cin>>n>>m;for(int i=0;i<101;i++)tim[i]=INT_MAX;
	
	for(int i=0;i<m;i++){
		cin>>l>>r>>t>>c;
		for(int j=l;j<=r;j++){
			if(tim[j]>t){
				tim[j]=t;
				res[j]=c;
			}
		}
	}
	ll sum=0;
	for(int i=0;i<=n;i++){sum+=res[i];}
	cout<<sum;
	return 0;
}