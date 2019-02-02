// http://codeforces.com/contest/141/problem/A
#include<iostream>
#include<math.h>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<string>
#include<algorithm>
using namespace std;
string srt(string s){
  int i,j,l;
  char c;
  l=s.size();
  for(i=0;i<l;i++)
  for(j=0;j<l-i-1;j++){
    if(s[j]>s[j+1]){
      c=s[j];
      s[j]=s[j+1];
      s[j+1]=c;
    }
  }
  return s;
}
int main(){
  string a,b,c,d;
  int cnt=0,i=0,j=0;
  cin>>a>>b>>c;
  d=a+b;
d=srt(d);
c=srt(c);

  if(!c.compare(d))
  cout<<"YES";
  else
  cout<<"NO";

  return 0;
}
