/* Date: 19 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "\nEnter the Id: ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The Id of this employee is " << id << " and this is employee number " << count << endl;
    }
};

int Employee::count=1000;

int main()
{
    Employee sai, len, dra;

    sai.setData();
    sai.getData();

    len.setData();
    len.getData();

    dra.setData();
    dra.getData();

    return 0;
}