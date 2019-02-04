// http://codeforces.com/contest/231/problem/A
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
	int j,a,b,c,n,cnt=0;

	cin>>n;

	for(j=0;j<n;j++){
		cin>>a>>b>>c;
			if((a+b+c)>=2)
				cnt++;

			a=0;
			b=0;
			c=0;
		
	}


		cout<<cnt<<endl;

return 0;

}
