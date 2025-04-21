#include <iostream>
#include <limits>
using namespace std;
int main()
{
	int num;
	cout << " Enter a number: ";
	cin >> num;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "  Invalid Entry!" << endl;
		cout << "  Enter a number: ";
		cin >> num;
	}
	cout << "Number is : " << num << endl;
	system("pause");
	return 0;
}
