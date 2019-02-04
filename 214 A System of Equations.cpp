// http://codeforces.com/contest/214/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
	#endif
    int n,m,cnt=0;vector<pair<int,int>> v;
    cin>>n>>m;

    for(int i=0;i*i<=n;i++)
        for(int j=0;j<=n;j++){
            if(i*i+j==n){
                v.push_back({i,j});
            }
          
        }
        

        for(auto k=begin(v);k<end(v);k++){
            if((*k).first+(*k).second*(*k).second==m)
                cnt++;
            
        }
cout<<cnt;
    return 0;
}