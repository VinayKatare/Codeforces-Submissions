// http://codeforces.com/contest/31/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x,i,j,k,v[200];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            for(k=j+1;k<n;k++)
                if(v[i]==v[j]+v[k]){
                    cout<<i+1<<" "<<j+1<<" "<<k+1;return 0;
                }
        
            cout<<-1;

    return 0;
}
