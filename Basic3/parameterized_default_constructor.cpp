/* Date: 19 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    Complex(int, int); // Declaring constructor

    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y)
{
    a = x;
    b =y;
}

int main()
{
    // implicit call 
    Complex c(2, 4);
    c.printNumber();

    // Explicit call 
    Complex b = Complex(10, 4);
    b.printNumber();

    return 0;
}