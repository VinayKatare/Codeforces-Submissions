// http://codeforces.com/contest/11/problem/A
#include<bits/stdc++.h>
using namespace std;

#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << " ";
    err(++it, args...);
}
#define all(a)                      a.begin(), a.end()
#define pb                          push_back
#define ll	                         long long int 


int main(){
/*#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
#endif
*/
ll n,d,x,cnt=0,p=LLONG_MIN;

cin>>n>>d;
while(cin>>x){
      if(d!=1){
	while(p>=x && p!=LLONG_MIN){
		x=x+d;cnt++;
	}
		p=x;
      }
      else{
	if(p>=x && p!=LLONG_MIN){
	
	cnt=cnt+abs(p-x);
	}
	else{
	p=x;
	}
	
	p++;

       }


}

cout<<cnt;
return 0;
}