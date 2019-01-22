// http://codeforces.com/contest/4/problem/C
#include <bits/stdc++.h>
using namespace std;
map<string,int> m;

int main() {
	string x;
	int n;
	cin>>n;
	while(cin>>x){
		if(m[x]!=0)
		{
			cout<<x<<m[x]<<endl;;
			string s=x+to_string(m[x]++);
		//	cout<<s<<endl;;
			m[s]++;
		//	cout<<s<<" "<<m[s]<<endl;;
		}
		else{
			m[x]++;cout<<"OK"<<endl;
		}
		
	}
	return 0;
}