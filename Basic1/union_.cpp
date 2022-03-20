// Date: 17 - 03 - 2022

#include <iostream>
using namespace std;

union money
{
    /* One data will be used at a time */
    int rice;
    char car;
    float pounds;

};


int main()
{
    union money m1;
    m1.pounds = 100.21;
    m1.rice = 500;
    m1.car = 'c';

    cout<< "The value of m1.car = "<<m1.car<<endl;
    cout<< "The value of m1.pounds = "<<m1.pounds<<endl;
    cout<< "The value of m1.cricear = "<<m1.rice<<endl;
    

    return 0;
}