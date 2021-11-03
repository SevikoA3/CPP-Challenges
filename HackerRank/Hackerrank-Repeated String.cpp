#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    string s;
    long long n;
    cin >> s >> n;
    cout << (n/s.size() * count(s.begin(), s.end(), 'a')) + count(s.begin(), s.begin() + (n%s.size()), 'a');
    return 0;
}