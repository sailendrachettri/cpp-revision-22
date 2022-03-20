/* Date: 19 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void setPrice(void);
    void displayPrice(void);
    void initCounter(void)
    {
        counter = 0;
    }
};

void Shop::setPrice()
{
    cout << "Enter the Id of your Item no " << counter+1 << ": ";
    cin >> itemId[counter];
    cout << "Enter the price of your Item: ";
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayPrice(void)
{
    cout<<endl;
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << "." << endl;
    }
}

int main()
{
    Shop dukaan;

    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}