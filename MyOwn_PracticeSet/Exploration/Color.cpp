#include <iostream>
#include <windows.h>
using namespace std;
/*
Color list
1.Blue
2.Green
3.Cyan
4.Red
5.Purple
6.Yellow(dark)
7.Default White
8.Grey
9.Bright Blue
10.Bright Green
11.Bright Cyan
12.Bright Red
13.Pink/Megenta
14.Yellow
15.Bright White
Numbers after 15 include background colors
*/
void color(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
int main()
{
	color(10);
	cout << "Hi,Its a demo of colors" << endl;
	color(3);
	cout << "C++ also supports colors" << endl;
	color(15);
	return 0;
}
