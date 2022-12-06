#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, d, count = 0, it;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) if (find(arr, arr+n, arr[i]+d) != arr+n && find(arr, arr+n, arr[i]+d*2) != arr+n) count++;
    cout << count;
    return 0;
}
