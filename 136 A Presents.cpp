// http://codeforces.com/contest/136/problem/A
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
vector<pair<int,int>> v;
for(int i=1;i<=n;i++){
    cin>>x;
    v.pb({i,x});
}
sort(all(v),[](pair<int,int> a,pair<int,int> b){return a.second<b.second;});

for(auto p:v)
    cout<<p.first<<" ";
    return 0;
}
