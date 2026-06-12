#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int original = n, sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit; // for 3-digit numbers
        n /= 10;
    }return original == sum;
}int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isArmstrong(num))
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";
        return 0;
}