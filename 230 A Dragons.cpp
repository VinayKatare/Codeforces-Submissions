// http://codeforces.com/contest/230/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
long long power;int n,x,y;
cin>>power>>n;
vector<pair<int,int>> v;
for(int i=0;i<n;i++){
	cin>>x>>y;
	v.push_back({x,y});
}
sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b){return a.first<b.first;});
int i=0;
for(auto t:v){
	if(power>t.first){
		power+=t.second;i++;
	}
}//cout<<power<<endl;
if(v.size()==i)cout<<"YES";
else cout<<"NO";
	return 0;
}