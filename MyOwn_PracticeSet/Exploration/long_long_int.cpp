#include <iostream>
#include <limits>
using namespace std;
int main()
{
	long long int a;
	cout << "Enter a number: ";
	cin >> a;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Wrong Input!" << endl;
	}
	cout << "Number is: " << a << endl;
}