#include <iostream>
using namespace std;

int sum(int a, int b) // formal parameters
{
    return a + b;
}

int main()
{
    int num1 = 10, num2 = 40;

    sum(num1, num2); // actual parameters

    return 0;
}