// http://codeforces.com/contest/313/problem/B
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
int c[1000000];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,l,r;
	string s;int m;
	cin>>s>>m;
	for(int i=1;i<s.size();i++){
		if(s[i]==s[i-1])
		c[i+1]=1+c[i];
		else c[i+1]=c[i];
	}
	//for(int i=1;i<=s.size();i++)cout<<c[i]<<" ";
	while(m--){
		cin>>l>>r;
	
		cout<<c[r]-c[l]<<endl;
	}

	return 0;
}