/* Date: 17 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

int sum(int, int); // Function prototyping

int main()
{
    int num1, num2;
    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    cout << "The sum of " << num1 << " and " << num2 << " is " << sum(num1, num2) << "." << endl; // actual parameters

    return 0;
}

int sum(int a, int b) // formal parameters
{
    int c = a + b;
    return c;
}