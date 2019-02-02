// http://codeforces.com/contest/133/problem/A
#include <iostream>
#include <cctype>
#include <cstring>
#include <stdlib.h>
using namespace std;

int main()
{
	int i,l;
	string str;
	cin>>str;
	
	
	for(i=0;i<str.length();i++)
	{
		if(str[i]>'!' && str[i]<'~'){
			if(str[i]=='H'||str[i]=='Q'||str[i]=='9'){
			cout<<"YES";
			exit(0);
			
			}
		}
		else
			continue;



	}

cout<<"NO";

return 0;
}