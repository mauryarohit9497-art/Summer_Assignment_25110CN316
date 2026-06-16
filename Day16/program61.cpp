#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = 5;int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += arr[i];
    }
    int total = n * (n + 1) / 2;
    cout << "missing number = " << total - sum;
    return 0;
}