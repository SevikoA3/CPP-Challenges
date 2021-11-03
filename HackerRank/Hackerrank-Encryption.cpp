#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    string s;
    int count = 0;
    cin >> s;
    int row = floor(sqrt(s.size()));
    int col = ceil(sqrt(s.size()));
    if (row * col < s.size()){
        if (row > col) col = row;
        else row = col;
    }
    char s1[row][col];
    for (int q = 0; q < row; q++){
        for (int j = 0; j < col; j++){
            if (count < s.size()) {
                s1[q][j] = s[count];
                count++;
            }
            else s1[q][j] = '-';
        }
    }
    for (int i = 0; i < col; i++){
        for (int j = 0; j < row; j++){
            if (s1[j][i] != '-') cout << s1[j][i];
        }
        if (i < col-1) cout << " ";
    }

    return 0;
}