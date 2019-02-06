// http://codeforces.com/contest/268/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
	#endif
    int n,x,y,sum=0;vector<int> va,vb;
    cin>>n;
    while(cin>>x>>y){
        va.push_back(x);
        vb.push_back(y);
    }
    for(auto i=begin(va);i<end(va);i++){
        sum=sum+count(vb.begin(),vb.end(),*i);
    }
    cout<<sum;
    return 0;
}