#include <iostream>
//#include<bits/stdc++.h>
#define LL long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    int ppl = 5;
    int cu = 2;
    cin >> n;
    if (n <= 0){
        cout << 0;
    }
    else if (n == 1){
        cout << 2;
   }
    else {
        for (int i = 0; i < n-1; i++){
            ppl = (ppl/2)*3;
            cu += ppl/2;
        }
    }
    cout << cu;
    return 0;
}