// http://codeforces.com/contest/160/problem/A
#include <iostream>
#include <cctype>
#include <cstring>
#include <stdlib.h>
using namespace std;

int main()
{
	int i,j,n,tot=0,sum1=0,sum2=0,a[100],temp;

	cin>>n;

	for(i=0;i<n;i++)
		cin>>a[i];

	for(j=0;j<n;j++)
		for(i=0;i<n-j-1;i++)
		{
			if(a[i]<a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}

	for(i=0;i<n;i++)
		tot+=a[i];

	for(i=0;i<n;i++)
	{
		sum1+=a[i];
		sum2=tot-sum1;
		if(sum1>sum2)
			goto A;
	}

A:	cout<<++i;


	return 0;
}