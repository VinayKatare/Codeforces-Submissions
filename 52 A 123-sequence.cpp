// http://codeforces.com/contest/52/problem/A
#include<bits/stdc++.h>
using namespace std;
int a[4];
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x;
    cin>>n;
    while(cin>>x)
    	a[x]++;

    sort(a,a+4);

    cout<<a[1]+a[2];

    return 0;
}
