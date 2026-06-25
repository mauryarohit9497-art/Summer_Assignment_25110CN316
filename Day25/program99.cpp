#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[5];

    cout << "Enter 5 names:\n";
    for (int i = 0; i < 5; i++) {
        cin >> names[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (names[i] > names[j]) {
                string temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }

    cout << "\nNames in alphabetical order:\n";
    for (int i = 0; i < 5; i++) {
        cout << names[i] << endl;
    }

    return 0;
}