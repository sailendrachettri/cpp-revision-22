/* Date: 18 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int a = 1, b = 4, c = 5;

    cout << "The sum of " << a << " and " << b << " is " << sum(a, b) << endl;
    cout << "The sum of " << a << ", " << b << " and " << c << " is " << sum(a, b, c) << endl;

    return 0;
}