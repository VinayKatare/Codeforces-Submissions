// http://codeforces.com/contest/1/problem/A
#include<bits/stdc++.h>
using namespace std;
int max(int m,int n){
  return (m>n)?m:n ;
}

int main(){
  unsigned long long int m,n,cnt,M,N,a;
  cin>>m>>n>>a;

  M=max(m,n);
  if(M==m)
  N=n;
  else
  N=m;
  if(M%a==0 && N%a==0)
  cnt=(M/a)*(N/a);
  else if(M%a!=0 && N%a==0)
  cnt=(M/a+1)*(N/a);
  else if(M%a==0 && N%a!=0)
  cnt=(M/a)*(N/a+1);
  else
  cnt=(M/a+1)*(N/a+1);

 
/*
  if(M%a!=0){
    cnt+=N/a;
  }
*/
  cout<<cnt;

  return 0;
}