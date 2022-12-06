#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, m, temp;
    cin >> n;
    stack <unsigned long> scores;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (scores.empty() || scores.top() != temp){
            scores.push(temp);
        }
    }
    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> temp;
        while (!scores.empty() && temp >= scores.top()){
            scores.pop();
        }
        cout << scores.size() + 1 << endl;
    }

    return 0;
}