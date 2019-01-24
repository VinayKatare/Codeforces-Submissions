// http://codeforces.com/contest/38/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b,x[200],sum=0;
    cin>>n;
    for(int i=0;i<n-1;i++)
    cin>>x[i];
    cin>>a>>b;

    for(int i=b-1;i>=a;i--)
        sum=sum+x[i-1];

    cout<<sum;
    
    return 0;
}
