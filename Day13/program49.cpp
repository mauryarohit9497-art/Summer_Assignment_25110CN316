#include <iostream>
using namespace std;

int main() {
    int a[5];
    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    cout << "Array elements are: ";
    for(int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    return 0;
}