#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Id of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};
int main()
{
    int size = 3;
    int id, price;
    ShopItem *ptr = new ShopItem[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the id of Item :";
        cin >> id;
        cout << "Enter the price of Item : ";
        cin >> price;
        ptr->setData(id, price);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        ptr--;
        ptr->getData();
    }

    return 0;
}