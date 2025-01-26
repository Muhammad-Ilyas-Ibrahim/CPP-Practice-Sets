#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    static int salary;

public:
    void setId()
    {
        cout << "Enter the Id of Employee: ";
        cin >> id;
        cout << "Enter the name of Employee: ";
        cin >> name;
        salary += 1000;
    }
    void getId()
    {
        cout << "ID of Employee is " << id << ", Name of Employee is " << name << " and salary is " << salary << endl;
    }
};
int Employee::salary = 1000;
int main()
{
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    cout << endl
         << endl;
    for (int i = 0; i < 4; i++)
    {
        fb[i].getId();
    }

    return 0;
}