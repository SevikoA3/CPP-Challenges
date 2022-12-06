#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    long n, c, m;
    cin >> t;
    while (t--){
        cin >> n >> c >> m;
        int choco = n/c, eat = 0, wrap = 0;
        while (choco > 0){
            eat += choco;
            wrap += choco;
            choco = wrap/m;
            wrap = wrap%m;
        }
        cout << eat << endl;
    }
    return 0;
}