// http://codeforces.com/contest/32/problem/B
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int l=s.size();
    for(int i=0;i<l;){
        if(s[i]=='.'&& i<l){
            cout<<0;i++;
        }
        if(s[i]=='-'&&s[i+1]=='.'&& i<l){
            cout<<1;i++;i++;
        }
        if(s[i]=='-'&&s[i+1]=='-'&& i<l){
            cout<<2;i++;i++;
        }
    }
    return 0;
}
