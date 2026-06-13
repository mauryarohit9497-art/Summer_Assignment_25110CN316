#include <iostream>
using namespace std;

int main() {
    int a[5], max, min;
    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++)
        cin >> a[i];
        max = min = a[0];
    for(int i = 1; i < 5; i++) {
        if(a[i] > max)
            max = a[i];
            if(a[i] < min)
            min = a[i];
    }cout << "Largest = " << max << endl;
    cout << "Smallest = " << min;
    return 0;
}