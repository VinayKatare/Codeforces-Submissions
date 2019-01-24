// http://codeforces.com/contest/58/problem/A
#include <iostream>
#include <cctype>
#include <cstring>
#include <stdlib.h>
using namespace std;

int main()
{
	int i,l,h1=0,e1=0,l1=0,o1=0;
	string str;

	cin>>str;
	l=str.length();

	for(i=0;i<l;i++)
	{
		if(str[i]=='h')
		{
			h1++;
		
			if(h1>1)
				--h1;
		}
		if(str[i]=='e' && h1==1)
		{
			e1++;
		
			if(e1>1)
				--e1;
		}
		if(str[i]=='l' && e1==1)
		{
			l1++;
		
			if(l1>2)
				--l1;
		}
		if(str[i]=='o' && l1==2)
		{
			o1++;
		
			if(o1>1)
				--o1;
		}

	}

	if((h1+e1+l1+o1)==5)
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
	
}