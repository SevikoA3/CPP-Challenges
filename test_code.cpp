#include <iostream>
#include <string>
using namespace std;

int main(){
    string test = "123145235";
    cout << (test.find("99") == 4294967295);
}