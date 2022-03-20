// Date: 17 - 03 - 2022

#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {12, 32, 54, 89};

    int *ptr = marks;

    //*ptr points to first value of an array
    cout << "The of marks[0] is " << *ptr << endl;
    cout << "The of marks[1] is " << *(ptr + 1) << endl;
    cout << "The of marks[2] is " << *(ptr + 2) << endl;
    cout << "The of marks[3] is " << *(ptr + 3) << endl;

    return 0;
}