// http://codeforces.com/contest/118/problem/A
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <cctype>
#include <string.h>
#include <math.h>
using namespace std;

struct character{
	char str1[150];
}st;

int main(){

	string str;
	int i,l,l1;
	getline(cin,str);

	l=str.length();
	int j=l;
	

	for(i=0;i<l;i++)
	str[i]=tolower(str[i]);

	

	for(i=0;i<l;i++){

		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y'){
			continue;
		}
		else 
		{
			if(j==0){

				exit(0);
			}

			st.str1[j]=str[i];
			cout<<'.'<<st.str1[j--];
			
			
		}
	}
	
	

	
	

	return 0;
}