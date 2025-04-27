#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    long double b;
    string name;
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter country code: ";
    cin >> a;
    cout << "Enter remaining number: ";
    cin >> b;
    // cout<<setprecision(10)<<b<<"\n";
    // system("pause");
    // string number="+"+to_string(a)+" "+to_string(b);
    string plus = "+";
    ofstream input;
    input.open("Contacts.csv", ios::app);
    input << name << "," << plus << a << setprecision(13) << b << "\n";
    input.close();
    return 0;
}
