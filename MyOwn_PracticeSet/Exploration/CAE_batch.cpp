#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char x = 34;
    ofstream file;
    file.open("copy.txt");
    file << "@echo off\n";
    // Coping a content of directory named Record from current directory to the directory named Record of Local Disk E
    file << "echo D|xcopy " << x << "Record" << x << " " << x << "E:/Record" << x << ">nul\n";
    file << "exit";
    file.close();
    system("pause");
    // renaming txt to bat
    system("ren copy.txt copy.bat");
    system("copy.bat");
    system("del copy.bat");
    system("pause");
    return 0;
}
