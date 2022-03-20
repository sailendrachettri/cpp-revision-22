/* Date: 18 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

int factorial(int val){
    if(val <= 1) return 1;
    return val * factorial(val-1);
}

int fib(int n){
    if(n < 2) return 1;

    return fib(n-2) + fib(n-1);
}

int main()
{
    int num1;
    cout<< "Enter a number: ";
    cin>>num1;

    // cout<< "The factorial of a "<<num1<<" is "<<factorial(num1)<<endl;

    cout<<"The term in fibonacci sequience at position "<<num1<<" is "<<fib(num1)<<endl;
    

    return 0;
}