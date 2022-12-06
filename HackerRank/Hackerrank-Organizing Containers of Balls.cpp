#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int q, n;
    cin >> q;
    while (q--){
        cin >> n;
        int containers[n][n];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> containers[i][j];
            }
        }
        vector<int> col(n, 0), row(n, 0);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                col[i] += containers[i][j];
                row[i] += containers[j][i];
            }
        }
        sort(col.begin(), col.end());
        sort(row.begin(), row.end());
        col == row ? cout << "Possible" : cout << "Impossible";
        cout << endl;
    }
    return 0;
}