#include <iostream>
using namespace std;

int main(){
    int num;
    string key;
    looping:
    cout << "input kata kunci = ";
    cin >> key;
    cout << "Input angka special = ";
    cin >> num;
    if (num % 6 == 5){
        for(int i = 0; i < num / 6; i++){
            cout << "\tAngka Special Loh!\t" << i + 1 << endl;
        }
    }
    cout << "Nilai Specccial = " << num / 6 << endl;
    if (key == "love") goto looping;
    
    return 0;
}