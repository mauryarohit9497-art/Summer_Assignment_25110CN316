#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 0, 2, 0, 3};
    int temp[5];
    int k = 0;
    for(int i = 0; i < 5; i++) {
        if(arr[i] != 0) {
            temp[k] = arr[i];
            k++;
        }
    }
    while(k < 5) {
        temp[k] = 0;
        k++;
    }cout << "Array aftter moving zeroes: ";
    for(int i = 0; i < 5; i++) {
        cout << temp[i] << " ";
    }

    return 0;
}