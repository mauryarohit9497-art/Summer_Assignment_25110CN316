#include <iostream>
using namespace std;

int main() {
    long long n, largestPrimeFactor = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (long long i = 2; i <= n; i++) {
        while (n % i == 0) {
            largestPrimeFactor = i;
            n /= i;
        }
    }

    cout << "Largest Prime Factor = " << largestPrimeFactor;

    return 0;
}