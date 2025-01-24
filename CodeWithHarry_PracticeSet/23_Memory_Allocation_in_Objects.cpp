#include <iostream>
#include <iomanip>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter() { counter = 0; };
    void setPrice();
    void displayPrice();
};

void shop::setPrice()
{
    cout << "Enter id of your item no " << counter + 1 << ": ";
    cin >> itemId[counter];
    cout << "Enter Price of your Item: ";
    cin >> itemPrice[counter];
    counter++;
}
void shop::displayPrice()
{
    cout << "\n\n\t" << left << setw(10) << "ID" << setw(15) << "Price" << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << "\t" << left << setw(10) << itemId[i] << setw(15) << itemPrice[i] << endl;
    }
}

int main()
{
    shop items;
    items.initCounter();
    items.setPrice();
    items.setPrice();
    items.setPrice();
    items.displayPrice();
    return 0;
}