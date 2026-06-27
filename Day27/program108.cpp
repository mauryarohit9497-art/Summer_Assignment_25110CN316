#include <iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
    float m1, m2, m3, total, percentage;
};

int main()
{
    Student s;

    cout << "Enter Roll Number: ";
    cin >> s.roll;

    cout << "Enter Name: ";
    cin >> s.name;

    cout << "Enter Marks of 3 Subjects: ";
    cin >> s.m1 >> s.m2 >> s.m3;

    s.total = s.m1 + s.m2 + s.m3;
    s.percentage = s.total / 3;

    cout << "\n------ Marksheet ------\n";
    cout << "Roll Number : " << s.roll << endl;
    cout << "Name        : " << s.name << endl;
    cout << "Subject 1   : " << s.m1 << endl;
    cout << "Subject 2   : " << s.m2 << endl;
    cout << "Subject 3   : " << s.m3 << endl;
    cout << "Total Marks : " << s.total << endl;
    cout << "Percentage  : " << s.percentage << "%" << endl;

    if (s.percentage >= 40)
        cout << "Result      : Pass";
    else
        cout << "Result      : Fail";

    return 0;
}