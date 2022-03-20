/* Date: 20 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object no " << count << endl;
    }

    ~num()
    {
        cout << "This is the time when destructor is called for object no " << count << endl;
        count--;
    }
};

int main()
{
    cout<< "We are inside main()"<<endl;
    cout<< "Creating first object n1"<<endl;
    num n1;
    {
        cout<< "\nEntering this block"<<endl;
        cout<< "Creating two more objects"<<endl;
        num n2, n3;
        cout<< "Exiting this block"<<endl;
    }

    cout<< "Back to main()"<<endl;

    return 0;
}