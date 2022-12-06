#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t, n, a, b, temp;
    vector <int> vec;
    cin >> t;
    while (t--){
        vec.clear();
        cin >> n >> a >> b;
        for (int i = 0, j = n-1; i < n && j >= 0; i++, j--) vec.push_back(a*i+b*j);
        sort(vec.begin(), vec.end());
        auto it = unique(vec.begin(), vec.end());
        vec.resize(distance(vec.begin(), it));
        for (int i = 0; i < vec.size(); i++) cout << vec[i] << " ";
        cout << "\n";
    }
    return 0;
}