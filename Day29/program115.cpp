#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str1, str2;
    int choice;

    cout << "Enter the initial string: ";
    getline(cin, str1);

    do {
        cout << "\n========= STRING OPERATIONS SYSTEM =========\n";
        cout << "Current String: \"" << str1 << "\"\n";
        cout << "--------------------------------------------\n";
        cout << "1. Find Length of the String\n";
        cout << "2. Concatenate (Append) Another String\n";
        cout << "3. Reverse the String\n";
        cout << "4. Convert to Uppercase\n";
        cout << "5. Convert to Lowercase\n";
        cout << "6. Compare with Another String\n";
        cout << "7. Enter a New Main String\n";
        cout << "8. Exit\n";
        cout << "Enter your choice (1-8): ";
        cin >> choice;
        cin.ignore(); 

        switch (choice) {
            case 1:
                cout << "\nLength of the string: " << str1.length() << " characters.\n";
                break;

            case 2:
                cout << "\nEnter string to concatenate: ";
                getline(cin, str2);
                str1 += str2;
                cout << "Result after concatenation: \"" << str1 << "\"\n";
                break;

            case 3:
                reverse(str1.begin(), str1.end());
                cout << "\nReversed string: \"" << str1 << "\"\n";
                break;

            case 4:
                for (char &c : str1) {
                    c = toupper(c);
                }
                cout << "\nUppercase string: \"" << str1 << "\"\n";
                break;

            case 5:
                for (char &c : str1) {
                    c = tolower(c);
                }
                cout << "\nLowercase string: \"" << str1 << "\"\n";
                break;

            case 6:
                cout << "\nEnter string to compare with: ";
                getline(cin, str2);
                if (str1 == str2) {
                    cout << "Both strings are completely identical.\n";
                } else if (str1 > str2) {
                    cout << "\"" << str1 << "\" comes after \"" << str2 << "\" alphabetically.\n";
                } else {
                    cout << "\"" << str1 << "\" comes before \"" << str2 << "\" alphabetically.\n";
                }
                break;

            case 7:
                cout << "\nEnter new main string: ";
                getline(cin, str1);
                cout << "Main string updated successfully.\n";
                break;

            case 8:
                cout << "\nExiting the system. Goodbye!\n";
                break;

            default:
                cout << "\nInvalid choice! Please select an option between 1 and 8.\n";
        }

        cout << "\n--------------------------------------------\n";

    } while (choice != 8);

    return 0;
}