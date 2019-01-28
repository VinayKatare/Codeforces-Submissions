// http://codeforces.com/contest/116/problem/A
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
ll n,ans=INT_MIN,tot=0,x,y;
cin>>n;

for(int i=0;i<n;i++){
	cin>>x>>y;

	tot=tot+y-x;
	ans=max(ans,tot);
}
cout<<ans;
return 0;
}