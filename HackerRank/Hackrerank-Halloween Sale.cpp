#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int p, d, m, s, count = 0;
    cin >> p >> d >> m >> s;
    while (s>=0){
        s -= p;
        (p-d) > m ? p -= d : p = m;
        count++;
    }
    cout << count-1;
    return 0;
}