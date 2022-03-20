#include <iostream>
using namespace std;

int glo = 90;

void sum(){
    int a;
    cout<<"glo inside sum() "<<glo<<endl;
}

int main()
{
    int a = 10, b = 20;
    // cout << "The value of a is " << a << " and the value of b is " << b << endl;

    char c = 'o';
    // cout<<"Char: "<<c<<endl;


    int glo = 100;
    glo = 102;
    cout<<glo<<endl;
    sum();
    cout<<glo<<endl;
    return 0;
}