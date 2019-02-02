// http://codeforces.com/contest/137/problem/B
#include<bits/stdc++.h>
using namespace std;
int a[5001];
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
int n,x;
cin>>n;
while(cin>>x){
    a[x]++;
}
cout<<count(a+1,a+n+1,0);

    return 0;
}
