#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], sub[2][2];
    cout << "enter first mAtrix (2x2):\n";
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            cin >> a[i][j];
            cout << "enter second matrix (2x2):\n";
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            cin >> b[i][j];
            for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            sub[i][j] = a[i][j] - b[i][j];

    cout << "Subtraction Matrix:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++)
            cout << sub[i][j] << " ";
        cout << endl;
    }

    return 0;
}