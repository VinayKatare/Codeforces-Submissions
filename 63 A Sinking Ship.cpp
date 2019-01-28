// http://codeforces.com/contest/63/problem/A
#include<bits/stdc++.h>
using namespace std;
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << " ";
    err(++it, args...);
}
#define all(a)                      a.begin(), a.end()
#define pb                          push_back
#define ll	long long int
int main(){
	vector<string> v[3];
string x,y,cap;
int n;
cin>>n;
while(cin>>x>>y){
	if(y=="rat")
	v[0].pb(x);
	else if(y=="woman"||y=="child")
	v[1].pb(x);
	else if(y=="man")
	v[2].pb(x);
	else
		cap=x;
}
for(auto t:v[0])
	cout<<t<<endl;
for(auto t:v[1])
	cout<<t<<endl;
for(auto t:v[2])
	cout<<t<<endl;

	cout<<cap<<endl;
return 0;
}