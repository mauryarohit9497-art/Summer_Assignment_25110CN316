#include <iostream>
#include <string>
using namespace std;

int main() {
    int decimal;
    string binary = "";

    cout << "Enter a decimal number: ";
    cin >> decimal;

    if (decimal == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }

    while (decimal > 0) {
        binary = char((decimal % 2) + '0') + binary;
        decimal /= 2;
    }

    cout << "Binary: " << binary << endl;

    return 0;
}