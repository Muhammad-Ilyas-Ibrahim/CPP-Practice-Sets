#include <iostream>
using namespace std;
class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}; // This Constructor is needed because if we don't give value of p,y and r then it avoid error
    // If we don't make it ,compiler can't decide which costructor should be invoked
    BankDeposit(int p, int y, float r); // r can be like 0.04 for 4%
    BankDeposit(int p, int y, int r);   // r can be like 14 for 14%
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + r); // if interestRate is 4% then 0.04 * 1 = 1.04 and 1.04 * 100 = 104 for one year
        // And the loop will iterate y times to claculate returnValue for given years
    }
}
BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100; // to convert 4 into 0.04    4/100=0.04
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate); // if interestRate is 4% then 0.04 * 1 = 1.04 and 1.04 * 100 = 104 for one year
        // And the loop will iterate y times to claculate returnValue for given years
    }
}
void BankDeposit::show()
{
    cout << endl
         << "Principal amount was " << principal
         << " return value after " << years
         << " years is " << returnValue << endl
         << endl;
}
int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    // bd3.show();
    cout << "Enter the value of p y and r: ";
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p y and r: ";
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}