#include <iostream>
#include <string.h>
using namespace std;
void sum(int c)
{
	static int d = 0;
	d = d + c;
	cout << "Sum is: " << d << "\n\n";
}
void reverse()
{
	int i = 0;
	for (int j = 0; i < 10; i++)
	{
		cout << "\n\nEnter a number: ";
		int c;
		cin >> c;
		sum(c);
		if (i == 9)
		{
			while (true)
			{
				string ch;
				cout << "\nDo you still want to add (Y/N): ";
				cin >> ch;
				if (ch == "y" || ch == "Y" || ch == "yes" || ch == "Yes")
				{
					reverse();
				}
				if (ch == "n" || ch == "N" || ch == "no" || ch == "No")
				{
					exit(1);
				}
				else
				{
					cout << "Invalid Choice!" << endl;
				}
			}
		}
	}
}
int main()
{
	int a, b;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter Second number: ";
	cin >> b;
	sum(a + b);
	reverse();
}
