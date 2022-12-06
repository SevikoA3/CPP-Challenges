#include <iostream>
#define LL long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int max = 0;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i : a){
        int counta = 0;
        int countb = 0;
        for(int j = 0; j < n; j++){
            if(i == a[j]){
                counta++;
            }
        }
        for(int j = 0; j < n; j++){
            if((i-1) == a[j]){
                countb++;
            }
        }
        counta += countb;
        if (counta > max){
            max = counta;
        }
    }
    cout << max;

    return 0;
}
