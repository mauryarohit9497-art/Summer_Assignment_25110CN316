#include <iostream>
using namespace std;

int main() {
    int num, digit, product = 1;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        digit = num % 10;        // Extract last digit
        product = product * digit; // Multiply digit with product
        num = num / 10;          // Remove last digit
    }

    cout << "Product of digits = " << product;

    return 0;
}