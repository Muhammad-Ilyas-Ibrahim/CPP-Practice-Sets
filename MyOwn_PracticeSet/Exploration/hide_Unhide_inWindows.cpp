#include <iostream>
#include <Windows.h>
using namespace std;

void hide(string name)
{
    string command1 = "attrib +h +r +s " + name + " > nul";
    string command2 = "icacls " + name + " /deny Everyone:(F) > nul";
    system(command1.c_str());
    system(command2.c_str());
}
void unhide(string name)
{
    string command2 = "icacls " + name + " /grant Everyone:(F) > nul";
    string command1 = "attrib -h -r -s " + name + " > nul";
    system(command1.c_str());
    system(command2.c_str());
}

int main()
{
    hide("abid.png");
    hide("Wakeel.png");
    return 0;
}