// http://codeforces.com/contest/282/problem/A
#include <iostream>
#include <cstring>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	int n,x=0,i;
	string str[155];
	cin>>n;

	for(i=0;i<=n;i++)
	{
		getline(cin,str[i]);
	}


	for(i=0;i<=n;i++)
	{
		if(str[i]=="++X")
			++x;
		if(str[i]=="X++")
			x++;
		if(str[i]=="X--")
			x--;
		if(str[i]=="--X")
			--x;

		
	}

	cout<<x<<endl;


	return 0;
}