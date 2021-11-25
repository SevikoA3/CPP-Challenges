#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    string s;
    cin >> s;
    for (int i = 0; i < int(s.size())-1; i++){
        if (s[i] == s[i+1]){
            s.erase(i, 2);
            i = -1;
        }
    }
    cout << (s.size() ? s : "Empty String");
    return 0;
}