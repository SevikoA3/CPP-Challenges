#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, m;
    vector<int> result;
    cin >> n >> m;
    int c[m];
    for(int i = 0; i < m; i++) cin >> c[i];

    sort(c, c + m);
    result.push_back(c[0] - 0);
    for(int i = 0; i < m-1; i++) result.push_back((c[i+1] - c[i]) / 2);
    result.push_back(n - 1 - c[m-1]);
    cout << *max_element(result.begin(), result.end());
    
    return 0;
}
