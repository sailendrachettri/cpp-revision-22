/* Date: 19 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

class Complex; // Forward decelaration

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumReadComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a;
    int b;

    // Indiviidual function access
    // friend int Calculator::sumReadComplex(Complex o1, Complex o2);
    // friend int Calculator::sumCompComplex(Complex o1, Complex o2);

    // whole class as friend
    friend class Calculator;

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

int Calculator::sumReadComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    Calculator calc;

    o1.setNumber(1, 4);
    o2.setNumber(4, 8);

    int res = calc.sumReadComplex(o1, o2);
    cout<< "The sum of real part of o1 and o2 is "<<res<<endl;

    int res_c = calc.sumCompComplex(o1, o2);
    cout<< "The sum of complex part of o1 and o2 is "<<res_c<<endl;

    return 0;
}