#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    long n, k, q, temp;
    cin >> n >> k >> q;
    long a[n];
    long res[n];
    for (long i = 0; i < n; i++) cin >> a[i];
    for (long i = 0; i < q; i++){
        cin >> temp;
        cout << a[(n - (k % n) + temp) % n] << endl;
    }
    return 0;
}