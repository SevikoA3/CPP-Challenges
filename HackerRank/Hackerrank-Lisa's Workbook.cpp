#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, k, temp, page = 0, count = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> temp;
        for (int j = 1; j <= temp; j++){
            if (k==1 || j%k==1) page++;
            if (j == page) count++;
        }
    }
    cout << count;
    return 0;
}
