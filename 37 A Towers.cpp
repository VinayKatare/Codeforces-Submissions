// http://codeforces.com/contest/37/problem/A
#include<bits/stdc++.h>
using namespace std;
int a[1005];
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
    cout<<*max_element(a,a+1005)<<" "<<count_if(a,a+1005,[](int t){return t>0?1:0;});
    
    return 0;
}
