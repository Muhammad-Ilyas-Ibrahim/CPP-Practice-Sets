#include <iostream>
#include <limits>
#include <direct.h>
using namespace std;
int main()
{
    int m, d, y;
    cout << "Enter month: ";
    cin >> m;
    cout << "Enter date: ";
    cin >> d;
    cout << "Enter year: ";
    cin >> y;
    string date = to_string(m) + "/" + to_string(d) + "/" + to_string(y);
    cout << "Date: " << date << "\n\n";
    _mkdir("E:/%date%");
    system("pause");
    return 0;
}
