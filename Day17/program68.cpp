#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4};int b[] = {3, 4, 5, 6};
    cout << "common elements: ";
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(a[i] == b[j]) {
                cout << a[i] << " ";
            }
        }
    }return 0;
}