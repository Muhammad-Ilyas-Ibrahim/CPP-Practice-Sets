#include <iostream>
#include "ck.h"
using namespace std;
int main()
{
    // colors
    color(10);
    cout << "Hi,Its a demo of my TW header file" << endl;
    color(3);
    cout << "Using color function in TW.h" << endl;
    color(15);
    // String to Int
    string con = "24";
    int n = StoI(con);
    n = n - 4;
    cout << "Final: " << n << endl;
    // Upper Case
    string up = "rAna iLyas";
    up = Upper(up);
    cout << up << endl;
    // Lower Case
    string low = "rAnA iLYAS";
    low = lower(low);
    cout << low << endl;
    // Camel Case
    string camel = "rAnA iLyAs mR.iLyAS m-iLyAs m_nOOr_kHaN m,waqas moaVia:hAsSAn";
    camel = CamelCase(camel);
    cout << camel << endl;
    // Char array to string
    char arr[50] = "Hello i am testing my Header File";
    string S = CtoS(arr, sizeof(arr));
    cout << S << endl;
    return 0;
}
