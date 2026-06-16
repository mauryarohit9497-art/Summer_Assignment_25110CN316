#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 2};
    int n = 5;int count = 0;
    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }if (freq > count) {
            count = freq;
            cout << "Maximum frequency element = " << arr[i] << endl;
        }
    }return 0;
}