#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int b, sum=0, count=0;
    cin >> b;
    int arr[b];
    for (int i = 0; i < b; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum % 2 == 1) cout << "NO";
    else {
        for (int i = 0; i < b; i++){
            if (arr[i] % 2 != 0){
                arr[i]++;
                arr[i+1]++;
                count += 2;
            }
        }
        cout << count;
    }
    return 0;
}