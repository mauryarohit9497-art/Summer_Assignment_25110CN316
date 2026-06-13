#include <iostream>
using namespace std;

int main() {
    int a[5], even = 0, odd = 0;
    cout << "enter5 numbers: ";
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }cout << "even elements = "<< even << endl;
    cout << "odds elements = "<< odd;

    return 0;
}