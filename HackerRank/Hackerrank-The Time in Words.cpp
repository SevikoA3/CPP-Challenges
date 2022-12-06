#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int h, m;
    cin >> h >> m;
    string a[30] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"};
    if (m <= 30){
        if (m == 0) cout << a[h] << " o' clock";
        else if (m == 1) cout << a[m] << " minute past " << a[h];
        else if (m == 15) cout << "quarter past " << a[h];
        else if (m == 30) cout << "half past " << a[h];
        else cout << a[m] << " minutes past " << a[h];
    }
    else {
        if (m == 45) cout << "quarter to " << a[h+1];
        else if (m == 59) cout << a[60-m] << " minute to " << a[h+1];
        else cout << a[60-m] << " minutes to " << a[h+1];
    }
    return 0;
}