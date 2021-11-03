#include <iostream>
#include <string>
#define ULL unsigned long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    ULL p, q, h = 0;
    cin >> p >> q;
    for (ULL i = p; i <= q; i++){
        if (i < 4){
            if (i*i == i) cout << i << " "; continue;
        }
        string s = to_string(i);
        string k = to_string(i*i);
        string l = k.substr(0, k.size()/2);
        string r = k.substr(k.size()/2);
        if (stoull(l) + stoull(r) == i){
            cout << i << " ";
            h=1;
        }
    }
    if (h == 0) cout << "INVALID RANGE";
    return 0;
}