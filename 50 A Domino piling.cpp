// http://codeforces.com/contest/50/problem/A
#include<iostream>
#include<math.h>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<string>
#include<algorithm>
using namespace std;
int max(int m,int n){
  return (m>n)?m:n ;
}
int main(){
  int m,n,cnt,M,N;
  cin>>m>>n;

  M=max(m,n);
  if(M==m)
  N=n;
  else
  N=m;
  cnt=(M/2)*N;
  if(M%2!=0){
    cnt+=N/2;
  }
  cout<<cnt;

  return 0;
}
