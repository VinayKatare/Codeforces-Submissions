// http://codeforces.com/contest/304/problem/A
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
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif
long long int n,cnt=0;
cin>>n;
for(int i=1;i<=n;i++)
	for(int j=i;j<=n;j++)
		{		
			if((int)sqrt(i*i+j*j)*(int)sqrt(i*i+j*j)==i*i+j*j && (int)sqrt(i*i+j*j)<=n){
				cnt++;
			}
		}
cout<<cnt;
    return 0;
}