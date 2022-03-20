/* Date: 18 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData(){
        cout<< "The value of a is "<<a<<endl;
        cout<< "The value of a is "<<b<<endl;
        cout<< "The value of a is "<<c<<endl;
        cout<< "The value of a is "<<d<<endl;
        cout<< "The value of a is "<<e<<endl;
    }
};

void Employee:: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee harry;

    harry.setData(14, 21, 35);
    harry.d = 101;
    harry.e = 104;
    harry.getData();

    return 0; 
}