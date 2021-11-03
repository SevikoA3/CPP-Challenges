#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int d1, d2, m1, m2, y1, y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    if (y1 > y2){
        cout << (y1-y2)*10000;
    }
    else if (m1 > m2 && y1 >= y2){
        cout << (m1-m2)*500;
    }
    else if (d1 > d2 && m1 >= m2 && y1 >= y2){
        cout << (d1-d2)*15;
    }
    else {
        cout << 0;
    }
    
    return 0;
}