#include <iostream>
//#include <bits/stdc++.h>
#include <string> 
#include <algorithm>
using namespace std;

int result(long a, long b, long c){
    int m = 0;
    for (int i = a; i <= b; i++){
        string str = to_string(i);
        reverse(str.begin(), str.end());
        int newS = stoi(str);
        if ((i-newS) % c == 0){
            m += 1;
        }
    }
    return m;
}

int main(){
    ios_base::sync_with_stdio(false);
    long i,j,k;
    cin >> i >> j >> k;
    cout << result(i,j,k);

    return 0;
}
