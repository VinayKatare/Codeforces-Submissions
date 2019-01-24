// http://codeforces.com/contest/56/problem/A
#include<bits/stdc++.h>
using namespace std;
int a[200];
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int n,cnt=0,t=1;
    cin>>n;
    string a[]={"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    while(cin>>s){

        if(isdigit(s[0])){t=0;
            for(int i=0;i<s.size();i++){
                t=t*10+(s[i]-'0');
            }
            if(t<18)
                cnt++;
        }else
        for(int i=0;i<11;i++){
            if(!s.compare(a[i]))
            cnt++;
        }
   
        }
    cout<<cnt;
    return 0;
}
