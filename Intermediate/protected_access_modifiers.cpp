/* Date: 20 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

class Derived : protected Base
{
};

int main()
{
    Base b;

    Derived d;
    // cout<<d.a; // It is protected so can't use outside

    return 0;
}