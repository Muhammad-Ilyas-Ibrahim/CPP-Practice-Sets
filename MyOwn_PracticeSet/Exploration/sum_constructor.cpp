#include <iostream>
using namespace std;
class sum
{
    static int c;

public:
    void add(int a = 0, int b = 0)
    {
        c += a + b;
        cout << "Sum : " << c << endl;
    }
};
int sum::c;
int main()
{
    sum M;
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    M.add(a, b);
    int d = 0;
ck:
    cout << "Enter a number: ";
    cin >> d;
    M.add(d);
    goto ck;
    return 0;
}