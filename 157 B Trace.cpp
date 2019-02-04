// http://codeforces.com/contest/157/problem/B
#include<bits/stdc++.h>
using namespace std;
int a[10000];
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << " ";
    err(++it, args...);
}
#define all(a)                      a.begin(), a.end()
#define pb                          push_back
#define ll	long long int

int main(){
ll n,sum=0,x;
cin>>n;
while(cin>>x){
	a[x]++;
}
int t=n;
for(int i=1000;i>0;i--){
	
	if(a[i]==1 && t%2==n%2){
		sum=sum+i*i;t--;
	}
	else if(a[i]==1){
		sum=sum-i*i;t--;
	}

}
cout<<setprecision(11)<<(double)sum*3.1415926536;
return 0;
}