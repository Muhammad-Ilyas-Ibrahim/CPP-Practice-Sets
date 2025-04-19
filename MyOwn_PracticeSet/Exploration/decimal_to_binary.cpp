#include <iostream>
using namespace std;
int main()
{
	int decimal, remainder, bin = 0, product = 1;
	cout << "Enter a number: ";
	cin >> decimal;
	while (decimal != 0)
	{
		remainder = decimal % 2;
		bin = bin + (remainder * product);
		decimal = decimal / 2;
		product *= 10;
	}
	cout << "Binary: " << bin << endl;
	cout << "\n\n";
	system("pause");
	system("cls");
	main();
}
