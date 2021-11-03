#include <iostream>
#include <string>
#define LL long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int year;
    cin >> year;
    if (year == 1918){
        cout << "26.09.1918";
    }
    else if (year < 1918){
        string ystr = to_string(year);
        if (year % 4 == 0){
            cout << "12.09." << ystr;
        }
        else {
            cout << "13.09." << ystr;
        }
    }
    else if (year > 1918){
        string ystr = to_string(year);
        for(int i = 0; i < 1 ; i++){
            if (year % 400 == 0){
                cout << "12.09." << ystr;
                break;
            }
            else if (year % 100 == 0){
                cout << "13.09." << ystr;
            }
            else if (year % 4 == 0 && year % 100 != 100){
                cout << "12.09." << ystr;
                break;
            }
            else {
                cout << "13.09." << ystr;
                break;
            }
        }
    }

    return 0;
}
