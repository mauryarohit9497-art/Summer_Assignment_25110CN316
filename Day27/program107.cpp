#include <iostream>
using namespace std;

struct Salary
{
    int id;
    string name;
    float basic, bonus, netSalary;
};

int main()
{
    Salary s[10];
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    // Input details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> s[i].id;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Basic Salary: ";
        cin >> s[i].basic;

        cout << "Bonus: ";
        cin >> s[i].bonus;

        s[i].netSalary = s[i].basic + s[i].bonus;
    }

    // Display details
    cout << "\nSalary Records\n";
    cout << "ID\tName\tBasic\tBonus\tNet Salary\n";

    for (int i = 0; i < n; i++)
    {
        cout << s[i].id << "\t"
             << s[i].name << "\t"
             << s[i].basic << "\t"
             << s[i].bonus << "\t"
             << s[i].netSalary << endl;
    }

    return 0;
}