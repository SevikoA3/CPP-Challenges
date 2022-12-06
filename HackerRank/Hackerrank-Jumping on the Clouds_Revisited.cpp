#include <iostream>
#define LL long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, k, e = 100;
    cin >> n >> k;
    int c[n];
    for (int i = 0; i < n; i++){
        cin >> c[i];
    }
    int i = k % n;
    e -= c[i] * 2 + 1;
    while (i != 0){
        i = (i+k) % n;
        e -= c[i] * 2 + 1;
    }
    cout << e;

    return 0;
}
