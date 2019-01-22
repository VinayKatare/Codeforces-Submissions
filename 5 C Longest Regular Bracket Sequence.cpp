// http://codeforces.com/contest/5/problem/C
#include <bits/stdc++.h>
using namespace std;

#define all(a)                      a.begin(), a.end()
#define pb                          push_back
#define ll	long long int
int arr[10000005];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin>>s;
	stack<int> t;int mx=0,cnt=1;
	for(int i=0;i<s.size();i++){
		if(s[i]=='(')t.push(i);
		else{
			if(t.empty())continue;
			
			int x=t.top();
			t.pop();
			int len=i-x+1;
			if(arr[x-1])len+=arr[x-1];
			if(len>mx)mx=len,cnt=1;
			else if(len==mx)cnt++;
			
			arr[i]=len;
		}
	}
	cout<<mx<<" "<<cnt;
	return 0;
}