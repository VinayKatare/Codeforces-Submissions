// http://codeforces.com/contest/155/problem/A
#include <iostream>
using namespace std;
int a[1001];
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	
	int mi=a[0],mx=a[0];
	int cnt=0;
	for(int i=1;i<n;i++){
		if(mi>a[i]){
		cnt++;mi=a[i];
		}
		else if(mx<a[i]){
		cnt++;mx=a[i];
		}
	}
	cout<<cnt;
	return 0;
}