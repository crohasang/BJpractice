#include <bits/stdc++.h>
using namespace std;
int d[20];
int T, n;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    d[1] = 1;
    d[2] = 2;
    d[3] = 4;
    for(int i = 4; i < 11; i++){
        d[i] = d[i-1] + d[i-2] + d[i-3];
    }
    while(T--){
        cin >> n;
        cout << d[n] << '\n';
    }
}