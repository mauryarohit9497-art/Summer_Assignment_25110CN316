#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
};

int main()
{
    Employee e[10];
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    // Input employee details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> e[i].id;

        cout << "Name: ";
        cin >> e[i].name;

        cout << "Salary: ";
        cin >> e[i].salary;
    }

    // Display employee details
    cout << "\nEmployee Records\n";
    cout << "ID\tName\tSalary\n";

    for (int i = 0; i < n; i++)
    {
        cout << e[i].id << "\t"
             << e[i].name << "\t"
             << e[i].salary << endl;
    }

    return 0;
}