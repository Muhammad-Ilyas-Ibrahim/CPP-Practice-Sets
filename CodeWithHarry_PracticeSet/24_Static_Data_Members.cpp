#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;
    string name;

public:
    void setData()
    {
        cout << "Enter Employee Id: ";
        cin >> id;
        cout << "Enter Employee name: ";
        cin >> name;
        count++;
    }
    void getData()
    {
        cout << "Employee Id: " << id << "\nEmployee Name: " << name << endl;
        cout << "Employee Number: " << count << endl;
    }

    static void getCount()
    {
        // Static Member function can only use static variables
        // cout<<id<<endl;    It will throw error if used
        cout << "The value of count is " << count << endl;
    }

} bilal, ahmed, moavia;

int Employee::count; // Static variable is initialized by a default value which is 0
// But if we want to initaialize then we can initialize here (not in class)

int main()
{
    bilal.setData();
    bilal.getData();
    Employee::getCount();

    ahmed.setData();
    ahmed.getData();
    Employee::getCount();

    moavia.setData();
    moavia.getData();
    Employee::getCount();
    return 0;
}