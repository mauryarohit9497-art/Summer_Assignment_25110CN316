#include <iostream>
using namespace std;
int main() {
    int a[] = {1, 2, 3};
    int b[] = {3, 4, 5};
    cout << "Intersection: ";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(a[i] == b[j]) {
                cout << a[i] << " ";
            }
        }
    }return 0;
}