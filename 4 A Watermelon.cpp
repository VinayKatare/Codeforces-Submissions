// http://codeforces.com/contest/4/problem/A
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int w;
    cin >> w;
    
    if(w%2 ==0) {
        for(int i=1;  i<=w/2; ++i) {
            if(i%2 == 0 && (w-i)%2 == 0) {
                cout << "YES\n";
                exit(0);
            }
        }
    }
    cout << "NO\n";
    return 0;
}