#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, m, highest=0, total=0;
    cin >> n >> m;
    string s[n];
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }
    for(int i = 0; i < n-1; i++){
        for (int j = i+1 ;j < n; j++){
            int count = 0;
            for (int ind = 0; ind < m; ind++){
                if (s[i][ind] == '1' || s[j][ind] == '1'){
                    count++;
                }
            }
            if(count > highest){
                highest = count;
                total = 1;
            }
            else if (highest == count){
                total++;
            }
        }
    }
    cout << highest << endl << total;
    return 0;
}