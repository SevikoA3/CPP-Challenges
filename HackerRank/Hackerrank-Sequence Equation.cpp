#include <iostream>
#define LL long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int p[n];
    int newP[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; ++i)
    {
        newP[p[p[i]-1]-1] = i+1;
    }
    for (int i = 0; i < n; ++i)
    {
        cout << newP[i] << endl;
    }

    return 0;
}
