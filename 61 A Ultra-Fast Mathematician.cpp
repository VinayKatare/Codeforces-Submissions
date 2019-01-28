// http://codeforces.com/contest/61/problem/A
#include<iostream>
#include<cstdlib>
#include<string>
#include<string.h>
#include<algorithm>
#include<array>

using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;

	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]!=s2[i])
			cout<<'1';
		else
			cout<<'0';
	}

/*	for(int i=0;i<s1.size();i++)
	cout<<r[i];
*/
	return 0;
	
}