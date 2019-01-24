// http://codeforces.com/contest/59/problem/A
#include<iostream>
#include<math.h>
#include<cstring>
#include<cctype>
#include<cstdlib>
using namespace std;

int main(){
  string s;
  int l=0,u=0;
  cin>>s;

  for(int i=0;i<s.size();i++){
    if(islower(s[i]))
      l++;
  else
      u++;
  }

  if(l>=u)
  {
    for(int i=0;i<s.size();i++)
    s[i]=tolower(s[i]);
  }
  else
  {
    for(int i=0;i<s.size();i++)
    s[i]=toupper(s[i]);
  }

cout<<s;
  return 0;
}
