#include <iostream>
#include <sys/stat.h>
using namespace std;
bool IsPathExist(const string &dir)
{
	struct stat buffer;
	return (stat(dir.c_str(), &buffer) == 0);
}
void hide()
{
	system("attrib +h +r +s Record");
	system("echo Y|cls|cacls Record /P everyone:n >nul");
}
void unhide()
{
	system("echo Y|cls|cacls Record /P everyone:f >nul");
	system("attrib -h -r -s Record");
}
int main()
{
	unhide();
	int nf = IsPathExist("Record");
	hide();
	if (nf == 0)
	{
		cout << "Do not Exist!" << endl;
	}
	else
	{
		cout << "Exist!" << endl;
	}
	return 0;
}
