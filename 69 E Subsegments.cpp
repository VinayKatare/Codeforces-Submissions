// http://codeforces.com/contest/69/problem/E
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
ll a[1000000];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,k;
	set<ll> s;
	map<ll,ll> m;
	cin>>n>>k;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i<k){
			m[a[i]]++;
			if(m[a[i]]==1)s.insert(a[i]);
			else s.erase(a[i]);
		}
	}
	if(s.size()>0)
			cout<<*(--s.end())<<endl;
			else
			cout<<"Nothing"<<endl;
	
	for(int i=k;i<n;i++){
		m[a[i-k]]--;
		if(m[a[i-k]]==0)s.erase(a[i-k]);
		else if(m[a[i-k]]==1)s.insert(a[i-k]);
		
		m[a[i]]++;
		if(m[a[i]]==1)s.insert(a[i]);
			else s.erase(a[i]);
			
			if(s.size()>0)
			cout<<*(--s.end())<<endl;
			else
			cout<<"Nothing"<<endl;
		
	}
	
	return 0;
}