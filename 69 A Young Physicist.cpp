// http://codeforces.com/contest/69/problem/A
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int x[100],y[100],z[100],sx=0,sy=0,sz=0,n;
	cin>>n;

	for(int i=0;i<n;i++)
		cin>>x[i]>>y[i]>>z[i];

	for(int i=0;i<n;i++){
		sx+=x[i];
		sy+=y[i];
		sz+=z[i];
	}

	if(sx==0&&sy==0&&sz==0)
		cout<<"YES";
	else
		cout<<"NO";

	return 0;

}