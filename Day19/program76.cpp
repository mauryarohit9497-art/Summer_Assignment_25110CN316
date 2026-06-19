#include <iostream>
using namespace std;

int main() {
    int a[3][3], sum = 0;

    cout << "enter 3x3 matrix:\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> a[i][j];
            for(int i = 0; i < 3; i++)
        sum += a[i][i];
        cout << "Diagonal Sum = " << sum;

    return 0;
}