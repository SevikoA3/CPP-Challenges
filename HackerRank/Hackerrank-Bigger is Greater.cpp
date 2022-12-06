#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    string a;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (next_permutation(a.begin(), a.end())){
            cout << a << endl;
        } else {
            cout << "no answer" << endl;
        }
    }
    return 0;
}