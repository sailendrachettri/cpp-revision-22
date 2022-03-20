// Date: 15 - 03 - 2022

#include <iostream>
using namespace std;

int glo = 100;

int main()
{
    int glo = 90;

    // cout<<::glo<<endl;


    // *********************Refrence Variable********************
    // int x = 100;
    // int &y = x;

    // cout<< "x: "<<x <<endl;
    // cout<< "y: "<<x <<endl;

    // *********************Typecasting Variable******************** 
    float x = 99.9;
    cout<< "x: "<<x<<endl;
    cout<< "typedcast x: "<<(int)x<<endl;

    return 0;
}