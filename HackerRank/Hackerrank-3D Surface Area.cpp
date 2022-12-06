#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int H, W;
    cin >> H >> W;
    int A[H+2][W+2];
    for (int i = 0; i < H+2; i++){
        A[i][0] = 0;
        A[i][W+1] = 0;
        for (int j = 0; j < W+2; j++){
            A[0][j] = 0;
            A[H+1][j] = 0;
            if ((i > 0 && i <= H) && (j > 0 && j <= W)){
                cin >> A[i][j];
            }
        }
    }
    int res = (H*W)*2;
    for (int i = 0; i < H+1; i++){
        for (int j = 0; j < W+1; j++){
            res += abs(A[i][j] - A[i][j+1]);
            res += abs(A[i][j] - A[i+1][j]);
        }
    }
    cout << res;
    return 0;
}