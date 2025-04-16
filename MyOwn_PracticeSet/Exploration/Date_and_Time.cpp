#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    time_t now;
    struct tm nowlocal;
    now = time(NULL); // Get time from OS
    nowlocal = *localtime(&now);
    cout << "\n\n\t\tDate: " << nowlocal.tm_mday << "/" << nowlocal.tm_mon + 1 << "/" << nowlocal.tm_year + 1900 << endl;
    cout << "\n\n\t\tTime: " << nowlocal.tm_hour << ":" << nowlocal.tm_min << ":" << nowlocal.tm_sec << "\n\n\t\t";
    // char date[50]={nowlocal.tm_mday,"-",nowlocal.tm_mon,"-",nowlocal.tm_year+1900};
    // cout<<"\n\n\t\tDate: "<<date<<endl;
    system("pause");
    return 0;
}
