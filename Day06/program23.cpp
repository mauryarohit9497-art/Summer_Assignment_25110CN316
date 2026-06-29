#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        count += n % 2;  // Check last bit
        n /= 2;
    }

    cout << "Number of set bits = " << count << endl;

    return 0;
}