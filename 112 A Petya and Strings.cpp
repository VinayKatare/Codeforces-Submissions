// http://codeforces.com/contest/112/problem/A
#include <iostream>
#include <cstring>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
	int i,t1=0,t2=0;
	char s1[101],s2[101];

	cin>>s1>>s2;

	

	for(i=0;i<=strlen(s1);i++)
	{
		s1[i]=tolower(s1[i]);
		s2[i]=tolower(s2[i]);
		t1+=int(s1[i]);
		t2+=int(s2[i]);
		if(t1<t2){
		cout<<-1<<endl;
		exit(0);
		}
		if(t1>t2){
		cout<<1<<endl;
		exit(0);
		}


	}

	cout<<0<<endl;
		
	

	return 0;

}