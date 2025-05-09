#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	char number[] = "1234";
	for (int i = 0; number[i] != '\0'; i++)
	{
		num *= 10;
		num += number[i] - 48;
	}
	cout << num;
	if (num == 1234)
	{
		cout << "\nConverted" << endl;
	}
	else
	{
		cout << "\nNot Converted!" << endl;
	}
	return 0;
}