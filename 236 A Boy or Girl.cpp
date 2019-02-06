// http://codeforces.com/contest/236/problem/A
#include <iostream>
#include <cctype>
#include <cstring>
#include <stdlib.h>
using namespace std;


int main()
{
	int i,l,j,cnt=0;
	string str;
	char t;
	cin>>str;

	l=str.length();


	for(i=0;i<l;i++)
		for(j=0;j<l-i-1;j++)
		{
			if(str[j]<str[j+1])
			{
				t=str[j];
				str[j]=str[j+1];
				str[j+1]=t;
			}
		}

	for(i=0;i<l-1;i++)
		{
			if(str[i]!=str[i+1])
				cnt++;
		}
		cnt++;

	if(cnt%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";


	return 0;
}