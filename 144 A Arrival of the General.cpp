// http://codeforces.com/contest/144/problem/A
#include<bits/stdc++.h>
using namespace std;

#define all(a)                      a.begin(), a.end()
#define pb                          push_back
#define ll	long long int

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;

int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
int min=INT_MAX,max=INT_MIN,mi,mx;
for(int i=0;i<n;i++){
	if(min >= a[i] )
	min=a[i],mi=i;
	
	if(max < a[i])
	max=a[i],mx=i;
}

//cout<<min<<" "<<mi<<endl<<max<<" "<<mx<<endl;

if(mi > mx)cout<<mx+(n-1-mi);
else cout<<mx+(n-1-mi)-1;
return 0;
}