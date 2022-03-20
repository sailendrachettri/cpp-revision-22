/* Date: 19 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number() {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    Number(Number &obj)
    {
        cout<< "\nCopy constructor invoked."<<endl;
        a = obj.a;
    } 

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(100);
    x.display();
    y.display();
    z.display();

    Number z1(z);
    z1.display();


    return 0;
}