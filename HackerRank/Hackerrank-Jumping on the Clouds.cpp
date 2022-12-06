#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, num = 0, count = -1;
    cin >> n;
    int c[n];
    for (int i = 0; i < n; i++){
        cin >> c[i];
    }
    while (num < n){
        if (c[num] == 0){ 
            if (num < n-2){
                if (c[num] == 0 && c[num+1] == 0 && c[num+2] == 0){
                    count++;
                    num += 1;
                }
                else {
                    count++;
                }
            }
            else{    
                count++;
            }
        }
        num++;
    }
    cout << count;
    return 0;
}
