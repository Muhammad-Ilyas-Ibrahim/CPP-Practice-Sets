#include <iostream>
using namespace std;
/*
    Experience:
            Using this we can initialize a variable without  using assignment operator
*/
/*
Syntax for initialization list in Constructor:
    constructor(argument-list): initialization-section{
        other-code
    }

    class Test{
    int a,b;
    public:
        Test(int i, int j): a(i), b(j){constructor-body}
    };
*/
class Test
{
    int b;
    int a;

public:
    // Test(int i, int j) : a(i), b(j) {
    // Test(int i, int j) : a(i), b(j + i) {
    // Test(int i, int j) : a(i), b(j * 2) {
    // Test(int i, int j) : a(i), b(a + j) {  // Because a is initialized here so it will not throw error
    Test(int i, int j) : b(j), a(i + b)
    {                                          // It will throw a garbage value because a is initialized before b
        cout << "Constructor executed" << endl // If we initialize b before a then it will work
             << "Value of a is " << a << endl
             << "Value of b is " << b << endl;
    }
};
int main()
{
    Test obj(5, 10);

    return 0;
}