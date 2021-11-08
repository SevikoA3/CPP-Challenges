<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    long t, rem = 3;
    cin >> t;
    while (t > rem){
        t -= rem;
        rem *= 2;
    }
    cout << rem-t+1;
    return 0;
=======
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    long t, rem = 3;
    cin >> t;
    while (t > rem){
        t -= rem;
        rem *= 2;
    }
    cout << rem-t+1;
    return 0;
>>>>>>> 1dbdbe0c4c3785624a1d59849638058c11d90fdf
}