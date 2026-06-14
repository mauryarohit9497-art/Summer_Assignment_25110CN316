#include<iostream>
using namespace std;
int main() {
    int arr[5] = {10, 50, 30, 40, 20};
    int largest = arr[0];
    int second = arr[0];
    for(int i = 0; i < 5; i++) {
        if(arr[i] > largest) {
            second =largest;largest = arr[i];
        }
        else if(arr[i] > second && arr[i] < largest) {
            second = arr[i];
        }
    }cout << "Second Largest = " << second;
    return 0;
}