#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, total = 9999999;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (arr[i] == arr[j]){
                if (j-i < total) total = j-i;
                break;
            }
        }
    }
    if (total == 9999999) cout << -1;
    else cout << total;
    return 0;
}
