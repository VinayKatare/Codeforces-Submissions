// http://codeforces.com/contest/289/problem/C
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
	int n,m;
	cin>>n>>m;
	if(n==1 && m==1)return cout<<'a',0;
	if(n<m || m==1)return cout<<-1,0;
	
	string s="";
	int k=m-2;
	int nn=n-k;
	for(int i=0;i<nn;i++){
		if(i==0)s+='a';
		else if(s[i-1]=='a')s+='b';
		else s+='a';
	}
	for(int i=0;i<k;i++)s+=char('a'+2+i);
	cout<<s;
	return 0;
}