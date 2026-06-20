#include <iostream>
using namespace std;

int main() {
    int a[2][2];

    cout << "enter 2x2 matrix:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }
    if(a[0][1] == a[1][0])
        cout << "symmetric Matrix";
    else
        cout << "not Symmetric Matrix";

    return 0;
}