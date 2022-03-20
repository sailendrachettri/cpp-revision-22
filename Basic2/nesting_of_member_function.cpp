/* Date: 18 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

class binary
{
    string s;
    void chk_bin();

public:
    void read();
    void ones();
    void display();
};

void binary::read()
{
    cout << "Enter a binary number: " << endl;
    cin >> s;
}

void binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format." << endl;
            exit(0);
        }
    }
}

void binary::ones(void)
{
    // chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else 
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout<< "Displaying binary number: ";
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i)<<" ";
    } cout<<endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin(); // It throws an error as it is a private member of binay class
    b.ones();
    b.display();

    return 0;
}