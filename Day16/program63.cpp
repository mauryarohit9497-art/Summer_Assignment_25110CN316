#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 4, 5, 7, 8};
    int n = 5;int sum = 12;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                cout << "Pair: " << arr[i] << " and " << arr[j];
            }
        }
    } return 0;
}