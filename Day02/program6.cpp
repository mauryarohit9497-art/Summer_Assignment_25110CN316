#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        digit = num % 10;              // Extract last digit
        reverse = reverse * 10 + digit; // Build reversed number
        num = num / 10;                // Remove last digit
    }

    cout << "Reversed number = " << reverse;

    return 0;
}