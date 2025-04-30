#include <iostream>
#include <unistd.h>
#include <windows.h>
using namespace std;
int ck5();
int ck()
{
	system("cls");
	cout << "\n\n\t\t\t Think a number in range 20-99\n\t\t\t and Press Enter\n\n\t\t\t ";
	system("pause");
	cout << "\n\n\t\t\t Now add the both digits of that number\n\t\t\t For example:";
	cout << " If you thought 75  then add 7 and 5 \n\t\t\t\t      which will be 12 and then remember the result\n\t\t\t and Press Enter\n\n\t\t\t ";
	system("pause");
}
int ck1()
{
	int d;
	cout << "\n\n\t\t\t\t Enter the added amount: ";
	cin >> d;
	return d;
}
int ck3()
{
	cout << "\n\n\t\t\t Now subtract that result from your thought number \n\t\t\t Like subtract 12 from 75 according to above given example";
	cout << "\n\t\t\t Press Enter\n\n\t\t\t ";
	system("pause");
	system("cls");
	cout << "\n\n\t\t\t Now enter the first digit of the remaining value \n\t\t\t Like 75-12 =63";
	cout << "\n\t\t\t You have to enter 6 according to this example";
}
int ck4()
{
	int a;
	cout << "\n\n\t\t\t\t Enter the first digit: ";
	cin >> a;
	return a;
}

int main()
{
	for (;;)
	{
		int a1, b, b1, c, d;
		ck();
		d = b1 = ck1();
		if (d > 17)
		{
			cout << "\n\n\t\t\t You thought more than 98";
			ck5();
		}
		else if (d <= 2)
		{
			cout << "\n\n\t\t\t You thought 20 or less than 20";
			ck5();
		}
		else
		{
			ck3();
			a1 = ck4();
			if (a1 >= 1)
			{
				system("cls");
				cout << " \n\n\t\t\t Calculating Result.";
				Sleep(400);
				system("cls");
				cout << " \n\n\t\t\t Calculating Result..";
				Sleep(400);
				system("cls");
				cout << " \n\n\t\t\t Calculating Result...";
				Sleep(400);
				system("cls");
				cout << " \n\n\t\t\t Calculating Result.";
				Sleep(400);
				system("cls");
				cout << " \n\n\t\t\t Calculating Result..";
				Sleep(400);
				system("cls");
				cout << " \n\n\t\t\t Calculating Result...";
				Sleep(400);
				system("cls");
				b = 9 - a1;
				c = a1 * 10 + b + b1;
				cout << "\n\n\t\t\t\t ***********************";
				cout << "\n\t\t\t\t Your second number is " << b;
				cout << "\n\t\t\t\t ***********************";
				cout << "\n\n\t\t\t      =============================";
				cout << "\n\t\t\t       Your Remaining number is " << a1 << b;
				cout << "\n\t\t\t      =============================";
				cout << "\n\n\t\t\t\t =======================";
				cout << "\n\t\t\t\t    So,You thought " << c;
				cout << "\n\t\t\t\t =======================";
				cout << "\n\n\t\t\t Press Enter to restart the Program\n\n";
				system("pause");
			}
			else
			{
				ck5();
			}
		}
	}
}
int ck5()
{
	cout << "\n\n\t\t\t You thought a wrong number\n";
	cout << "\n\t\t\t Read the guide well then think again\n";
	cout << "\n\t\t\t Now Program will restart\n";
	sleep(8);
	system("cls");
	cout << "\n\t\t\t Program is restarting.";
	Sleep(400);
	system("cls");
	cout << "\n\t\t\t Program is restarting..";
	Sleep(400);
	system("cls");
	cout << "\n\t\t\t Program is restarting...";
	Sleep(400);
	system("cls");
	cout << "\n\t\t\t Program is restarting.";
	Sleep(400);
	system("cls");
	cout << "\n\t\t\t Program is restarting..";
	Sleep(400);
	system("cls");
	cout << "\n\t\t\t Program is restarting...";
	Sleep(400);
	system("cls");
}
