#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int key = 3;
    int low = 0, high = 4, mid;
    while(low <= high) {
        mid = (low + high) / 2;
        if(a[mid] == key) {
            cout << "found";
            break;
        }
        else if(key > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    return 0;
}