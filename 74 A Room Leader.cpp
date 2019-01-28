// http://codeforces.com/contest/74/problem/A
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
#define ll	long long int

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
string name,ans_name;
int a,b,c,d,e,plus,minus;
int n,tot=0;
cin>>n;
int m=INT_MIN;
while(n-- >0){
	name="";
	cin>>name>>plus>>minus>>a>>b>>c>>d>>e;
	tot=plus*100-minus*50+a+b+c+d+e;
//	cout<<name<<" "<<tot<<endl;
	if(m<tot){
		ans_name=name;
		m=tot;
	}
	
}
cout<<ans_name;
return 0;
}