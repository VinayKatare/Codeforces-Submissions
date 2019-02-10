// http://codeforces.com/contest/289/problem/B
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
int c[100000];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,k,x;
	cin>>n>>m>>k;vector<int> v;
	while(cin>>x){
		c[x]++;
		v.pb(x);

	}

	int ans=INT_MAX;
	for(int i=1;i<=10000;i++){
		if(c[i]>0){
			int cnt=0;int num=0;
			for(auto t:v)
				if(abs(t-i)%k==0){
					cnt=cnt+(abs(t-i))/k;num++;
				}
			if(num==n*m){ans=min(ans,cnt);
			//cout<<i<<" "<<num<<" "<<cnt<<endl;
				
			}
		
		}
	}
	if(ans==INT_MAX)cout<<-1;
	else
	cout<<ans;
	return 0;
}