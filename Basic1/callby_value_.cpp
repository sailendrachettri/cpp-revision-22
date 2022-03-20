/* Date: 18 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 4, b = 5;
    cout<< "The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swap(a, b);
    cout<< "The value of a is "<<a<<" and the value of b is "<<b<<endl;
    

    return 0;
}