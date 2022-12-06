#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int list[n];
    for (int i = 0; i < n; i++){
        cin >> list[i];
    }
    for (int i = 0; i < n; i++){
        int count = 0;
        string number = to_string(list[i]);
        for (auto x : number){
            int pembagi = (x - '0'); //soalnya kalo dijadiin char dijadiin int jadi char
            if (pembagi != 0 && list[i] % pembagi == 0){
                count++;
            }
        }
        cout << count << endl;
    }
}