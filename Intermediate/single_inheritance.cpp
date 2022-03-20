/* Date: 20 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;

    Employee(){}

    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
};

// Derived class
class Programmer : Employee
{

public:
    int languageCode = 9;
    Programmer(int inpId)
    {
        id = inpId;
    }
};

int main()
{
    Employee sai(1), len(2), dra(3);

    cout << sai.salary << endl;
    cout << len.salary << endl;
    cout << dra.salary << endl;

    Programmer obj(10);

    return 0;
}