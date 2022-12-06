#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    unsigned long b, w, bc, wc, z;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> b >> w >> bc >> wc >> z;
        cout << b * min(bc, wc+z) + w * min(wc, bc+z) << "\n";
    }
    return 0;
}