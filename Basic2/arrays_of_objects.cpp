// /* Date: 19 - 03 - 2022
// Author: Sailendra */

// #include <iostream>
// using namespace std;

// class Employee
// {
//     int id;
//     int salary;

// public:
//     void setId(void)
//     {
//         salary = 100900;
//         cout << "Enter the id of employee: ";
//         cin >> id;
//     }
//     void getId(void)
//     {
//         cout << "The id of the employee is " << id << endl;
//     }
// };

// int main()
// {
//     // Employee sai;
//     // sai.setId();
//     // sai.getId();

//     // array of objects
//     Employee fb[4];
//     for(int i =0; i < 4; i++){
//         fb[i].setId();
//     }
//     for(int i =0; i < 4; i++){
//         fb[i].getId();
//     }

//     return 0;
// }

/* Date: 19 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDataBySum(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber(void)
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.setData(2, 3);
    c1.printNumber();

    c2.setData(4, 1);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}