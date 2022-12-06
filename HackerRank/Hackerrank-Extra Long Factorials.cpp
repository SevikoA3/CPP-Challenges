#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, c = 0, k = 0;
    cin >> n;
    vector<int> v (200, 0);
    v[0] = 1;
    for (int i = 2; i <= n; i++){
        for (int j = 0; j <= k; j++){
            v[j] = v[j] * i + c;
            c = v[j] / 10;
            v[j] %= 10;
        }
        while(c){
            k++;
            v[k] = c % 10;
            c /= 10;
        }
    }
    for (int i = k; i >= 0; i--){
        cout << v[i];
    }
    return 0;
}