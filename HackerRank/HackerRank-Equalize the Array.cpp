#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, temp = 0, res = 0;
    cin >> n;
    int arr[n];
    vector<int> list;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (i > 0 && find(list.begin(), list.end(), arr[i]) == list.end()) list.push_back(arr[i]);
    }
    for (auto i = 0; i < list.size(); i++){
        temp = count(arr, arr+n, list[i]);
        if (temp > res) res = temp;
    }
    cout << n-res;
    return 0;
}