#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int q, a, b;
    cin >> q;
    for (int i = 0; i < q; i++){
        cin >> a >> b;
        cout << floor(sqrt(b)) - ceil(sqrt(a)) + 1 << endl;
    }
    return 0;
}