// http://codeforces.com/contest/263/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,ans,x;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++){
			cin>>x;
			if(x==1){
				ans=abs(i-2)+abs(j-2);

			}
		}

cout<<ans;
	return 0;

}