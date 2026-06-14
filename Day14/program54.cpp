#include<iostream>
using namespace std;
int main() {
    int arr[5] = {10, 20, 10, 30, 10};
    int key, count = 0;
    cout << "Enter element: ";
    cin >> key;
    for(int i = 0; i < 5; i++) {
        if(arr[i] == key)
            count++;
    }cout << "Frequency = " << count;
    return 0;
}