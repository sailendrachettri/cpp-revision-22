// Date: 16 - 03 - 2022

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    // cout<<"The address of a is "<<&a<<endl;
    cout<<"The value of ptr is "<<ptr<<endl;

    cout<<"The value at address ptr is "<<*ptr<<endl<<endl;

    int **ptr_2 = &ptr;
    cout<<"The address of ptr_2 is "<<ptr_2<<endl;
    cout<<"The value at address ptr_2 is(also a address) "<<*ptr_2<<endl;
    cout<<"The value at address ptr_2 is "<<**ptr_2<<endl;

    return 0;
}