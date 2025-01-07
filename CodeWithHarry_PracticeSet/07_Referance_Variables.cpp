#include <iostream>
using namespace std;

// Global Variable
int c = 123, d;

int main()
{
    // int a,b,c;
    // cout<<" Enter value of a: ";
    // cin>>a;
    // cout<<" Enter value of b: ";
    // cin>>b;
    // c=a+b;
    // cout<<" Sum is : "<<c<<endl;

    // Using Scope resolution Operator
    // cout<<" Value of global variable : "<<::c<<endl;

    // Taking input and storing in Global variable
    // cout<<" Enter value of Global variable  d: ";
    // cin>>::d;
    // cout<<" Value of d is :"<<::d<<endl;

    // a decimal value like 34.6 is a double value in C++ by default
    // We should use f or F for float literal and l or L for double  literal when using in functions
    float ck1 = 34.5f;
    long double ck2 = 34.6l;
    long long int inc = 4;
    int i = 4;
    cout << " Float value: " << ck1 << endl
         << " Double value: " << ck2 << endl;
    // Lets check size of variables using  sizeof
    cout << " The value of 34.7: " << sizeof(34.7) << endl; // it will be double by default and double stores 8 bytes
    cout << " The value of 34.7f: " << sizeof(34.7f) << endl;
    cout << " The value of 34.7F: " << sizeof(34.7F) << endl;
    cout << " The value of 34.7l: " << sizeof(34.7l) << endl;
    cout << " The value of 34.7L: " << sizeof(34.7L) << endl;
    cout << " The value of 4 long long int: " << sizeof(inc) << endl;
    cout << " The value of 4 int: " << sizeof(i) << endl;

    //   ******   Reference Variables   ******
    // float x=455;
    // float & y = x;
    // cout<<"\n\n Value of x : "<<x<<endl;
    // cout<<" Value of y : "<<y<<endl;

    //    ******   TypeCasting   ******
    int a = 45;
    float b = 49.56;
    cout << "/n/n Value of a is: " << (float)a << endl;
    cout << "/n/n Value of a is: " << float(a) << endl;
    cout << " Value of b Is: " << (int)b << endl;
    cout << " Value of b Is: " << int(b) << endl;

    return 0;
}
