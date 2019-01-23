// http://codeforces.com/contest/35/problem/A
#include<bits/stdc++.h>
using namespace std;
int x[4];
int main(){

    ifstream fin("input.txt");
    ofstream fout("output.txt");
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n=3,a,b,c;
    fin>>a;
    x[a]=1;
    while(n--){
        fin>>b>>c;
        if(x[b]==1){
            x[b]=0;x[c]=1;
        }
        else if(x[c]==1){
            x[c]=0;x[b]=1;
        }
       
    }

    for(int i=1;i<4;i++){
        if(x[i]==1)
            fout<<i;
    }
    return 0;
}
