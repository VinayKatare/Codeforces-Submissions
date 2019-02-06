// http://codeforces.com/contest/266/problem/A
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
	int n,i,cnt=0;
	string str;

	cin>>n>>str;

	for(i=0;i<n-1;i++)
	{
		if(str[i]==str[i+1])
			cnt++;
	}

	cout<<cnt;

return 0;

}