#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    string s, t;
    int k;
    int common = 0;
    cin >> s >> t >> k;
    for (int i = 0; i < s.length() >= t.length() ? t.length() : s.length(); i++){
        if (s[i] == t[i]){
            common++;
        }
        else {
            break;
        }
    }
    if (int(s.length() + t.length()) - 2*common > k){
        cout << "No";
    }
    else if ((int(s.length() + t.length()) - 2*common) % 2 == k % 2){
        cout << "Yes";
    }
    else if (int(s.length() + t.length()) - 2*common - k < 0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}