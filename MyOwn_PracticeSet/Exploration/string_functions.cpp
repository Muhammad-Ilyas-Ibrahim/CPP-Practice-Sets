#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
    string a1 = "Hello Dear i am testing";
    cout << a1.substr(16, 7) << endl;
    string one("apples");
    string two("mango");
    cout << one << "\t" << two << endl;
    // swap strings
    one.swap(two);
    cout << one << "\t" << two << endl;
    // find
    cout << a1.find("Dear") << endl; // gives you index
    // Assign
    string s1;
    cout << s1.assign(a1) << endl;
    // erase
    cout << s1.erase(11);

    return 0;
}
