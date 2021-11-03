#include <iostream>
//#include<bits/stdc++.h>
#define LL long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t,n,m,s;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n >> m >> s;
        cout << (s+m-2) % n + 1 << endl;
    }

    return 0;
}