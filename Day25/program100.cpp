#include <iostream>
#include <string>
using namespace std;

int main() {
    string words[5], temp;
    cout << "Enter 5 words:\n";
    for (int i = 0; i < 5; i++) {
        cin >> words[i];
    }
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (words[i].length() > words[j].length()) {
                temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }

    cout << "\nWords sorted by length:\n";
    for (int i = 0; i < 5; i++) {
        cout << words[i] << endl;
    }

    return 0;
}