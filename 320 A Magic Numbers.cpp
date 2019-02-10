// http://codeforces.com/contest/320/problem/A
#include<bits/stdc++.h>
using namespace std;

#define all(a)                      a.begin(), a.end()
#define pb                          push_back
#define ll	long long int

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
string s;
cin>>s;
regex a("((1)|(14)|(144))*");

bool match=regex_match(s,a);

cout<<(match?"YES":"NO");
return 0;
}