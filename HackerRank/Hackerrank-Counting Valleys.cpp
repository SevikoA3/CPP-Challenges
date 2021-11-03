#include <iostream>
//#include<bits/stdc++.h>
#define LL long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int steps;
    int lvl = 0;
    int valley = 0;
    cin >> steps;
    char path[steps];
    for (int i = 0; i < steps; i++){
        cin >> path[i];
    }
    for (int i = 0; i < steps; i++){
        if (path[i] == 'U'){
            lvl++;
        }
        if (path[i] == 'D'){
            lvl--;
        }
        if (lvl == 0 && path[i] == 'U'){
            valley++;
        }
    }
    cout << valley;

    return 0;
}
