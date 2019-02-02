// http://codeforces.com/contest/144/problem/D
#include<bits/stdc++.h>
using namespace std;

#define all(a)                      a.begin(), a.end()
#define pb                          push_back
#define ll	long long int
int visited[1000000],d[1000000],a[1000000],b[1000000],c[1000000];
priority_queue<pair<int,int>> q;
vector<pair<int,int>> edge;
vector<pair<int,int>> e[1000000];
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
    int n,m,s,u,v,w,l;
    cin>>n>>m>>s;
    
    for(int i=0;i<m;i++){
        cin>>u>>v>>w;
        e[u].pb({w,v});
        e[v].pb({w,u});
        a[i]=u;
        b[i]=v;
        c[i]=w;
    }
    cin>>l;
    fill(d,d+n+1,INT_MAX);
    
    q.push({d[s]=0,s});
    int ans=0;
    while(!q.empty()){
        u=(q.top()).second;
        q.pop();
        if(!visited[u]++){
            if(d[u]==l)ans++;
            for(auto [w,v]:e[u]){
                if(d[u]+w<d[v]){
                    d[v]=d[u]+w;
                    q.push({-d[v],v});
                }
            }
        }
    }
  
    for(int i=0;i<m;i++){
		int x=d[a[i]],y=d[b[i]];
	 	if(!(x>=l || l-x>=c[i] || c[i]-(l-x)+y<l))
			ans++;
		swap(x,y);
		if(!(x>=l || l-x>=c[i] || c[i]-(l-x)+y<=l))
			ans++;
	}
    cout<<ans;
return 0;
}