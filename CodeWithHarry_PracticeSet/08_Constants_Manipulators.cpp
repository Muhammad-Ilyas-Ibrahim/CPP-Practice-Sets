#include <iostream>
// for setw Manipulator library
#include <iomanip>
using namespace std;
int main()
{
    // int a=45;
    // cout<<" Value of a was : "<<a<<endl;
    // a=50; //value of changes here to 50
    // cout<<" Value of a is : "<<a<<endl;

    //    ******* Constants *******
    // const int a1=65;
    // cout<<" Value of a1 is : "<<a1<<endl;
    // a1=45; //Here we will get error
    // cout<<" Tried to change value of a : "<<a1<<endl;

    //    ******* Manipulators *******
    // e.g endl; \n
    int a = 3, b = 10, c = 115;
    cout << " Thes Value of a : " << a << endl;
    cout << " Thes Value of b : " << b << endl;
    cout << " Thes Value of c : " << c << endl;
    // Using setw we give four spaces here
    // It is used to make output right justified
    cout << " Thes Value of a : " << setw(4) << a << endl;
    cout << " Thes Value of a : " << setw(4) << b << endl;
    cout << " Thes Value of a : " << setw(4) << c << endl;

    //    ******* Operator Precedence *******
    int x = 5, y = 6;
    int z = ((((x * 5) + y) - 45) + 87);
    cout << z << endl;
    return 0;
}
