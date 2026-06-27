#include <iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};

int main()
{
    Student s[100];
    int n = 0, choice, roll, i, pos;

    do
    {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Roll Number: ";
            cin >> s[n].roll;

            cout << "Enter Name: ";
            cin >> s[n].name;

            cout << "Enter Marks: ";
            cin >> s[n].marks;

            n++;
            cout << "Student record added successfully.\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No records found.\n";
            }
            else
            {
                cout << "\nRoll\tName\tMarks\n";
                for (i = 0; i < n; i++)
                {
                    cout << s[i].roll << "\t"
                         << s[i].name << "\t"
                         << s[i].marks << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Roll Number to Search: ";
            cin >> roll;

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    cout << "\nRecord Found\n";
                    cout << "Roll : " << s[i].roll << endl;
                    cout << "Name : " << s[i].name << endl;
                    cout << "Marks: " << s[i].marks << endl;
                    break;
                }
            }

            if (i == n)
                cout << "Record not found.\n";

            break;

        case 4:
            cout << "Enter Roll Number to Delete: ";
            cin >> roll;

            pos = -1;
            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    pos = i;
                    break;
                }
            }

            if (pos == -1)
            {
                cout << "Record not found.\n";
            }
            else
            {
                for (i = pos; i < n - 1; i++)
                {
                    s[i] = s[i + 1];
                }
                n--;
                cout << "Record deleted successfully.\n";
            }
            break;

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}