#include <iostream>
#include <string>
using namespace std;

// OOPs -->> Classes and Objects
// C++ was initially called C with classes and stroustroup
// Class -->> Extension of Structure (in C)
// Structures had limitations :
//   1=> Members are public
//   2=> No Methods
//  Classes => structures + more
//  Classes => can have methods and properties
//  Classes => have private and public members
//  You can decalare objects along with class decalaration
//  class employee{
//      //class defination
//  } Harry,Ilyas,Bilal;

// <---- Nesting of member functions ---->
class binary
{
private:
    string s;
    int chk_bin();

public:
    void read();
    void ones_complient();
    void display();
};
void binary::read()
{
    cout << "Enter a binary number: ";
    cin >> s;
    if (chk_bin() != 1)
    {
        cout << "Try Again!" << endl;
        read();
    }
}
int binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format!" << endl;
            return 0;
        }
    }
    return 1;
}
void binary::ones_complient()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary bin;
    bin.read();
    // bin.chk_bin(); If this method is public thenwe can access it use it
    cout << "Entered Binary number: ";
    bin.display();
    bin.ones_complient();
    cout << "One's Compliment: ";
    bin.display();
    return 0;
}