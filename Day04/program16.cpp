#include <iostream>
using namespace std;

int main() {
    int start, end, num, temp, rem, sum;

    cout << "Enter range: ";
    cin >> start >> end;

    for (num = start; num <= end; num++) {
        temp = num;
        sum = 0;

        while (temp != 0) {
            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp = temp / 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}