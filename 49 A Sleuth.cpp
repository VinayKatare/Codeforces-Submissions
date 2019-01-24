// http://codeforces.com/contest/49/problem/A
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
   char x;
   vector<char> v;
   while(cin>>x)
    v.push_back(x);
    
   if(v[v.size()-2]=='a'||v[v.size()-2]=='e'||v[v.size()-2]=='i'||v[v.size()-2]=='o'||
        v[v.size()-2]=='u'||v[v.size()-2]=='A'||v[v.size()-2]=='E'||v[v.size()-2]=='I'||
        v[v.size()-2]=='O'||v[v.size()-2]=='U'||v[v.size()-2]=='y'||v[v.size()-2]=='Y')
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}
