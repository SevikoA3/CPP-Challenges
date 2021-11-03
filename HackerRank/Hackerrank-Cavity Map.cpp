#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 1; i < n-1; i++){
        for (int j = 1; j < n-1; j++){
            if (arr[i][j-1] < arr[i][j] && arr[i][j+1] < arr[i][j] && arr[i-1][j] < arr[i][j] && arr[i+1][j] < arr[i][j]) arr[i][j] = 'X';
        }
    }
    for (int i = 0; i < n; i++) cout << arr[i] << endl;
    return 0;
}