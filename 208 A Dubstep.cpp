// http://codeforces.com/contest/208/problem/A
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(){
	string line,str;
	int i,nl,nl1;

	cin>>line;
	int l=line.length();

	for(i=0;i<l;i++)
	{
		if(line[i]=='W')
			if(line[i+1]=='U')
				if(line[i+2]=='B')
					{
						line.replace(i,3," ");
						
					}
	}
   nl=line.length();

	for(i=0;i<nl;i++){
		if(line[i]==' ' && line[i+1]==' ')
			line.erase(i,1);
	}

	nl1=line.length();

	if(line[0]==' ')
		line.erase(0,1);

	if(line[nl1-1]==' ')
		line.erase(nl1-1,1);

	cout<<line;

	return 0;
}