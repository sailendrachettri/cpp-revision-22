/* Date: 19 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

    friend Complex sumComplex(Complex o1, Complex o2);

public:
    void setNumber(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    void getNumber(void)
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));

    return o3;
}

int main()
{
    Complex c1, c2, sum;

    c1.setNumber(1, 4);
    c2.setNumber(5, 8);
    c1.getNumber();
    c2.getNumber();

    sum = sumComplex(c1, c2);
    sum.getNumber();

    return 0;
}