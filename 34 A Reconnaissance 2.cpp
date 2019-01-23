// http://codeforces.com/contest/34/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x,i,m=INT_MAX,ci,pi,d;
    vector<int> v;
    cin>>n;
    while(cin>>x)
        v.push_back(x);
    for(i=1;i<n;i++){
        d=abs(v[i]-v[i-1]);
        if(d<m){
            m=d;
            pi=i-1;
            ci=i;
        }
    }
    if(abs(v[0]-v[n-1])<m){
        cout<<1<<" "<<n;
    }
    else{
        cout<<pi+1<<" "<<ci+1;
    }
    return 0;
}
