#include <iostream>
#include <string>
using namespace std;
int t, R, r, C, c, found;
bool p_found;

string gridsearch (string G[100000], string P[100000]){
    p_found = true;
    for (int i = 0; i <= R-r; i++){
        size_t found = G[i].find(P[0]);
        while (found != string::npos){
            p_found = true;
            for (int j = 0; j < r; j++){
                if (G[i+j].find(P[j], found) != found){
                    p_found = false;
                    break;
                }
            }
            if (p_found) return "YES\n";
            found = G[i].find(P[0], found+1);
        }
    }
    return "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin >> t;
    while (t--){
        found = 0;
        cin >> R >> C;
        string arr[R];
        for (int i = 0; i < R; i++) cin >> arr[i];
        cin >> r >> c;
        string pattern[r];
        for (int i = 0; i < r; i++) cin >> pattern[i];
        cout << gridsearch(arr, pattern);
    }
    return 0;
}
