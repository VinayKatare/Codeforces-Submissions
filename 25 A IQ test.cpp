// http://codeforces.com/contest/25/problem/A
#include<iostream>
using namespace std;
int g,h,j,k,l,n,i;
main(){
cin>>n;
for(i=0;i<n;i++){
cin>>j;
if(j%2==0) {
	l++;
	h=i+1;
}
 else {
 	k++;
 	g=i+1;
 }
}
if(k==1) 
	cout<<g; 
else 
	cout<<h;
}