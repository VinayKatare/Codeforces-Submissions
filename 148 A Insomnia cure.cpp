// http://codeforces.com/contest/148/problem/A
#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
	#endif
 int k,l,m,n,d,cnt=0;
 cin>>k>>l>>m>>n>>d;
    for(int i=1;i<=d;i++){
        if(i%k==0||i%l==0||i%m==0||i%n==0)
        a[i]=1;
    }
      for(int i=1;i<=d;i++){
        if(a[i]==1)
            cnt++;

    }
    cout<<cnt;
    return 0;
}