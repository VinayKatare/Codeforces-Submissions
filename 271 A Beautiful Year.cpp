// http://codeforces.com/contest/271/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
	int y,i,j,a[4],t;
	cin>>y;
	i=y+1;
	while(1){
		t=i;
		a[0]=i%10;
		a[1]=(i/10)%10;
		a[2]=(i/100)%10;
		a[3]=(i/1000)%10;

		if(a[0]!=a[1] &&a[1]!=a[2] &&a[2]!=a[3] &&a[3]!=a[0] && a[0]!=a[2]&& a[1]!=a[3]){
			cout<<t;
			exit(0);
		}

		i++;
	}
	return 0;
}