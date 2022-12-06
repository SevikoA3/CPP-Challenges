#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, t, a, b;
    cin >> n >> t;
    long arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    while(t--){
        long minimum = 9999999;
        cin >> a >> b;
        for(int i = a; i <= b; i++){
            if (arr[i] < minimum) minimum = arr[i];
        }
        cout << minimum << endl;
    }
}