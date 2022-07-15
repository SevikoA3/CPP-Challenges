#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int i, k;
    string s, t;
    cin >> s >> t >> k;
    for (i = 0; s[i] == t[i]; i++);
    int j = s.size() + t.size();
    cout << ((j <= k + i * 2 && j % 2 == k % 2) || j < k ? "Yes" : "No");
    return 0;
}