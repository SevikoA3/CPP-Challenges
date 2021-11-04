#include <iostream>
#include <string>
using namespace std;

string happyladybug (string word, int n){
    int count;
    for (char i = 'A'; i <= 'Z'; i++){
        count = 0;
        for (int j = 0; j < n; j++){
            if (word[j] == i) count++;
        }
        if (count == 1) return "NO";
    }
    count = 0;
    if (word.find('_') == string::npos){
        for (int i = 0; i < n; i++){
            if (word[i] != word[i-1] && word[i] != word[i+1]) return "NO";
        }
    }
    return "YES";
}

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string word;
        cin >> word;
        cout << happyladybug(word, n) << endl;
    }
    return 0;
}