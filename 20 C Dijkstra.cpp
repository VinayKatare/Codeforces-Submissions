// http://codeforces.com/contest/20/problem/C
#include<bits/stdc++.h>
using namespace std;

#define all(a)                      a.begin(), a.end()
#define pb                          push_back
#define ll	long long int
vector< pair<ll,ll> > adj[1000000];
vector<ll> d(1000000,LLONG_MAX);
	ll parent[1000000];
void display(ll n){
	
	if(parent[n]+1)
	display(parent[n]);
	cout<<n<<" ";
}
void dijkstra(ll n){
	set<pair<ll,ll> >s;

	for(ll i=1;i<=n;i++)
	parent[i]=-1;
	s.insert({0,1});
	d[1]=0;
	while(!s.empty()){
		ll u=(s.begin())->second;

		s.erase(s.begin());

		for(auto i=adj[u].begin();i!=adj[u].end();i++){
			ll v=i->first;
			ll w=i->second;

			if(d[v]>d[u]+w){
				if(d[v]!=LLONG_MAX)
				s.erase(s.find({d[v],v}));
				
				d[v]=d[u]+w;
				parent[v]=u;
				s.insert({d[v],v});
			}
		}
	}
	
//	for(ll i=1;i<=n;i++)cout<<1<<"->"<<i<<" "<<d[i]<<endl;
	if(parent[n]+1)
	display(n);
	else
	cout<<-1;


}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

ll n,m,a,b,w;
cin>>n>>m;


while(cin>>a>>b>>w){
	adj[a].pb({b,w});
	adj[b].pb({a,w});
}

dijkstra(n);
return 0;
}