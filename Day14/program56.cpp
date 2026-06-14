#include<iostream>
using namespace std;
int main() {
    int arr[5] = {10, 20, 10, 30, 20};
    cout << "Duplicate elements are: ";
    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }return 0;
}