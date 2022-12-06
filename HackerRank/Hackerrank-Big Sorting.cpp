#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool function (string i, string j){
    int x = i.size();
    int y = j.size();
    if (x == y) return i < j;
    return x < y;
}

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<string> val (n);
    for (int i = 0; i < n; i++) cin >> val[i];
    sort(val.begin(), val.end(), function);
    for (int i = 0; i < n; i++) cout << val[i] << endl;
    return 0;
}