#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    char full[90];
    string M = "Bills";
    strcpy(full, M.c_str());
    mkdir(full);
    string S = "abc";
    S = M + "/" + S;
    strcpy(full, S.c_str());
    mkdir(full);
    string filename = "Bill.txt";
    S = S + "/" + filename;
    ofstream file;
    file.open(S, ios::out);
    file << "I was testing to make a directory and then one more directory in it anf then file in inner directory!";
    file.close();
    return 0;
}
