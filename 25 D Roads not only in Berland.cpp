// http://codeforces.com/contest/25/problem/D
#include <bits/stdc++.h>
using namespace std;
int parent[1005],rnk[1005];

int f(int x){
	if(parent[x]==x)return x;
	return parent[x]=f(parent[x]);
}
void merge(int x,int y){
	if(rnk[x]<rnk[y])
	swap(x,y);
	parent[y]=x;
	if(rnk[x]==rnk[y])rnk[x]++;
}
int main() {

	int n,set_a,set_b,a,b;
	cin>>n;vector<pair<int,int> >ans1,ans2;vector<int> v;
	for(int i=1;i<=n;i++)parent[i]=i,rnk[i]=0;
	while(cin>>a>>b){
		v.push_back(a);
		v.push_back(b);
		set_a=f(a);
		set_b=f(b);
		
		if(set_a!=set_b)merge(set_a,set_b);
		else ans1.push_back({a,b});
	//	cout<<a<<" "<<set_a<<","<<b<<" "<<set_b<<endl;
	//	if(v.size()==4)break;
	}
//	for(auto t:v)cout<<t<<" ";exit(0);
	for(int i=2;i<=n;i++){
		set_a=f(1);
		set_b=f(i);
		if(set_a!=set_b){
			merge(set_a,set_b);
			ans2.push_back({1,i});
		}
	}
	cout<<ans1.size()<<endl;
	for(int i=0;i<ans1.size();i++){
		cout<<ans1[i].first<<" "<<ans1[i].second<<" "<<ans2[i].first<<" "<<ans2[i].second<<endl;
	}
	return 0;
}