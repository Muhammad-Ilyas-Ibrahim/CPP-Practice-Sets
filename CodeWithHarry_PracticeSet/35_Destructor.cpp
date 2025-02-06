#include <iostream>
using namespace std;

// Destructor never takes an argument nor return any value
class num
{
    static int count;

public:
    num()
    {
        count++;
        cout << "Constructor is invoked for the object number " << count << endl;
    }
    ~num()
    {
        cout << "Destructor is invoked for the object number " << count << endl;
        count--;
    }
};
int num::count = 0;
int main()
{

    cout << "We are inside our main function" << endl;
    cout << "Creating 1st Object n1" << endl;
    num n1;

    {
        cout << "Entering this block" << endl;
        cout << "Creating 2 more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
        // n2 and n3 is destroyed here because they can't be used outside of this block
    }

    cout << "Back to main function" << endl;
    // and when the program is ended here n1 is also destroyed
    return 0;
}