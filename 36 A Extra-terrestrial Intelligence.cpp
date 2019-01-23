// http://codeforces.com/contest/36/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
        
    int n;
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    
    
    string s;
    fin>>n>>s;
    
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i,d=0,p=INT_MAX,c=INT_MAX;

    int l=s.size();

    for(i=0;i<l;i++){
        if(s[i]=='1'){
            p=c;
            c=i;
            if(d==0 && p!=INT_MAX && c!=INT_MAX)
                d=c-p;
        }
        if(c-p!=d && d!=INT_MAX && p!=INT_MAX && c!=INT_MAX){
            fout<<"NO";
           return 0;
        }
        
    }

    fout<<"YES";
    return 0;
}
