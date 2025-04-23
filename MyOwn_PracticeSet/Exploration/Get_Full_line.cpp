#include <iostream>
using namespace std;
void display(string b)
{
	cout << b;
}
int main()
{
	char a[50];
	string b;
	cout << "Enter name: ";
	cin.getline(a, 50);
	b = a;
	cout << b << "\n"
		 << endl;
	// display(a);
	return 0;
}
