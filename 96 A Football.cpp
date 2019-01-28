// http://codeforces.com/contest/96/problem/A
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main ()
{
  string str;
  int i,r,cnt=0;
  getline (cin, str);
  for(i=0;i<str.length();i++){
    if(str[i]==str[i+1])
    {
        cnt++;
        if(cnt==6){
            cout<<"YES";
            exit(0);
        }
    }
    else
        cnt=0;
  }
  cout<<"NO";
  return 0;
}
