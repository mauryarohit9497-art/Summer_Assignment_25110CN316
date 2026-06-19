#include <iostream>
using namespace std;

int main() {
    int a[2][2];
    cout << "Enter matrix (2x2):\n";
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            cin >> a[i][j];

    cout << "transpose Matrix:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++)
            cout << a[j][i] << " ";
        cout << endl;
    }

    return 0;
}