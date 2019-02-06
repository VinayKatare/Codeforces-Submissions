// http://codeforces.com/contest/281/problem/A
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main(){

	string str;
	int i,l;

	getline(cin,str);

	l=str.length();

	str[0]=toupper(str[0]);

	for(i=0;i<l;i++)
		cout<<str[i];


}