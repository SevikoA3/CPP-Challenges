#include <iostream>
#include <vector>
using namespace std;

vector<int> absolutePermutation(int n, int k){
    vector<int> temp(n, 0);
    if (k && n % (2*k)) return {-1};
    for (int i = 0; i < n; i++){
        if (!temp[i]){
            temp[i] = i + k + 1;
            temp[i + k] = i + 1;
        }
    }
    return temp;
}

int main(){
    ios_base::sync_with_stdio(false);
    int t, n, k;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n >> k;
        for (int j : absolutePermutation(n, k)) cout << j << " ";
        cout << endl;
    }

    return 0;
}