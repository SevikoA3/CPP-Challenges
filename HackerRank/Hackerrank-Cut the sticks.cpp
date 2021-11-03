#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, temp, mycount, mycount1 = 0;
    size_t temp1;
    cin >> n;
    vector<int> number;
    vector<int> number1;
    for (int i = 0; i < n; i++){
        if (i > 0){
            cin >> temp1;
            if (find(number1.begin(), number1.end(), temp1) == number1.end()){
                number1.push_back(int(temp1));
            }
            number.push_back(int(temp1));
            
        }
        else {
          cin >> temp;
          number.push_back(temp);
          number1.push_back(temp);
        }
    }
    sort(number.begin(), number.end());
    for (auto i = 0; i < number1.size(); i++){
        cout << n << endl;
        mycount = count(number.begin(), number.end(), number[0]);
        n -= mycount;
        number.erase(number.begin(), number.begin()+mycount);
    }
    return 0;
}