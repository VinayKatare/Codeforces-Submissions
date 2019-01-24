// http://codeforces.com/contest/55/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
int n;
cin>>n;
cout<<((n&(n-1))?"NO":"YES");
    return 0;
}
