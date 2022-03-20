// Date: 15 - 03 - 2022

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // const int a = 100;
    // cout<< "Before a: "<<a<<endl;
    // a = 200; // can't do this coz of const keyword
    // cout<< "After a: "<<a<<endl;

    // ********************Manipulators*********************
    float A = 1.34255; 
    cout << setprecision(3) << A << endl; 

    return 0;
}