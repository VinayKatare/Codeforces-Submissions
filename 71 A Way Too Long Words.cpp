// http://codeforces.com/contest/71/problem/A
#include <iostream>
#include <cstring>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){

	int i,n;

	string word[100];
	cin>>n;

	for(i=0;i<n;i++)
		cin>>word[i];

	
	for(i=0;i<n;i++){
		if(word[i].length()>10){
		  cout<<word[i][0]<<word[i].length()-2<<word[i][word[i].length()-1]<<endl;
		  continue;
		}
		else
			cout<<word[i]<<endl;
		
			}

			
	



return 0;

}
