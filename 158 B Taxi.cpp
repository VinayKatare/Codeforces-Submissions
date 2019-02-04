// http://codeforces.com/contest/158/problem/B
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,t=0;
	std::ios::sync_with_stdio(false);
	cin>>n;

	vector<pair<int,int>> v;
	vector<tuple<int,int,int>>v21;
	vector<int> v1,v2,v3,v4;

	for(int i=0;i<n;i++){
		cin>>x;
	if(x==4)
		v4.push_back(x);
	if(x==3)
		v3.push_back(x);
	if(x==2)
		v2.push_back(x);
	if(x==1)
		v1.push_back(x);
	}

	while(!v3.empty() && !v1.empty()){
		v.push_back(make_pair(3,2));
		v3.pop_back();
		v1.pop_back();
	}
	while(v2.size()>=2){
		v.push_back(make_pair(2,2));
		v2.pop_back();
		v2.pop_back();
	}
	if(n>=3)
	while(!v2.empty() && v1.size()>=2){
		v21.push_back(make_tuple(2,1,1));
		v2.pop_back();
		v1.pop_back();
		v1.pop_back();
	}
	while(!v2.empty() && !v1.empty()){
		v.push_back(make_pair(2,1));
		v2.pop_back();
		v1.pop_back();
	}
	while(v1.size()>=4){
		v.push_back(make_pair(1,1));
		v1.pop_back();
		v1.pop_back();
		v1.pop_back();
		v1.pop_back();
	}
	if(!v2.empty() || !v1.empty())
		t++;

	cout<<v4.size()+v.size()+v3.size()+v21.size()+t;

	return 0;
		
}