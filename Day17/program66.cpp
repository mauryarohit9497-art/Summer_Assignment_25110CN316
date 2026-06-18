#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3};
    int b[] = {3, 4, 5};
    cout << "Union: ";
    for(int i = 0; i < 3; i++)
        cout << a[i] << " ";
    for(int i = 0; i < 3; i++) {
        bool found = false;

        for(int j = 0; j < 3; j++) {
            if(b[i] == a[j]) {
                found = true;
                break;
            }
        }

        if(!found)
            cout << b[i] << " ";
    }

    return 0;
}