#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;
int main()
{
	system("color 0a");
	for (int i = 1; i <= 50; i++)
	{
		system("cls");
		cout << "\n\n\t\t\t\t   Loading " << 2 * i << "%\n\n\t\t";
		for (int j = 1; j <= i; j++)
		{
			cout << "\xB2";
		}
		if (i > 1 && i <= 20)
		{
			cout << "\n\n\t\tCreating Directory...";
			if (i == 20)
			{
				system("mkdir Demo");
			}
		}
		else if (i > 20 && i <= 40)
		{
			cout << "\n\n\t\tCreating File...";
			if (i == 40)
			{
				system("type nul> Demo/Demo.txt");
			}
		}
		else if (i > 40 && i <= 49)
		{
			cout << "\n\n\t\tWriting File...";
			if (i == 49)
			{
				system("echo Hello,This Program was made in C++ but also have taste of Batch Scripting> Demo/Demo.txt");
			}
		}
		else
		{
			cout << "\n\n\t\tCompleted!\n\t\tPress Enter to Continue";
		}
		Sleep(100);
	}
	getch();
	return 0;
}
