// http://codeforces.com/contest/41/problem/A
#include<iostream>
#include<math.h>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string s,t;
  cin>>s>>t;

  reverse(s.begin(),s.end());

  if(!s.compare(t))
  cout<<"YES";
  else
  cout<<"NO";

  return 0;
}
