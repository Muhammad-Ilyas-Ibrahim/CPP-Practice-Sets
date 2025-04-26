#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
int main()
{
	system("color 0a");
	char x = 219;
	cout << "\n\n\n\n\n\n\n\t\t\t\tLOADING: ";
	for (int i = 0; i < 50; i++)
	{
		cout << x;
		Sleep(100);
	}
	cout << "\n\n\t\t\t\tCompleted!" << endl;
	cout << "\n\n\n\n\n\n\n\n\n";
	return 0;
}
