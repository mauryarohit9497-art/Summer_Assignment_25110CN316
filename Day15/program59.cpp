#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int temp = arr[4];
    for(int i = 4; i > 0; i--) {
        arr[i] = arr[i - 1];
    }arr[0] = temp;
    cout << "array after right rotation= ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}