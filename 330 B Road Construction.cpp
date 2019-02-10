// http://codeforces.com/contest/330/problem/B
#include<bits/stdc++.h>
using namespace std;
int a[10000];
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
ios_base::sync_with_stdio(0);
cin.tie(0);

int n,m,x,y;
cin>>n>>m;
while(m-->0){
	cin>>x>>y;
	a[x]=1;a[y]=1;
}
cout<<n-1<<endl;
for(int i=1;i<=n;i++){
	if(a[i]==0){
		for(int j=1;j<=n;j++){
			if(j!=i){
				cout<<i<<" "<<j<<endl;
			}
		}
		exit(0);
	}
}
return 0;
}