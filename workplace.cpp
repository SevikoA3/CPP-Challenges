#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string happyladybug (vector<char> arr, vector<char>indchar){
    if (arr.size() == 1) return "YES\n";
    else if (find(indchar.begin(), indchar.end(), '_') == indchar.end()) return "NO\n";
    else {
        for (char x : indchar){
            if (x!= '_' && count(arr.begin(), arr.end(), x) < 2) {return "NO\n"; break;}
        }
        return "YES\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<char> indchar;
        vector<char> arr;
        for (int i = 0; i < n; i++){
            char temp;
            cin >> temp;
            arr.push_back(temp);
            if (i > 0){
                if (find(indchar.begin(), indchar.end(), temp) == indchar.end()){
                    indchar.push_back(temp);
                }
            }
        }
        cout << happyladybug(arr, indchar);
    }
    return 0;
}