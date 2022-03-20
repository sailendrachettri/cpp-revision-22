// Date: 17 - 03 - 2022

#include <iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;

int main()
{
    // without typedef keyword
    // struct employee harry;
    // struct employee sailendra;
    // struct employee topzer;

    // With typedef keyword
    ep sailendra;
    ep topzer;
    ep harry;

    harry.eId = 101;
    harry.favChar = 'e';
    harry.salary = 2000900;

    sailendra.eId = 102;
    sailendra.favChar = 'f';
    sailendra.salary = 8700;

    topzer.eId = 210;
    topzer.favChar = 'g';
    topzer.salary = 134553;

    cout<<"The salary of topzer is "<<topzer.salary<<endl;
    cout<<"The eId of topzer is "<<topzer.eId<<endl;
    cout<<"The favourite char of topzer is "<<topzer.favChar<<endl<<endl;

    cout<<"The salary of sailendra is "<<sailendra.salary<<endl;
    cout<<"The eId of sailendra is "<<sailendra.eId<<endl;
    cout<<"The favourite char of sailendra is "<<sailendra.favChar<<endl<<endl;

    cout<<"The salary of harry is "<<harry.salary<<endl;
    cout<<"The eId of harry is "<<harry.eId<<endl;
    cout<<"The favourite char of harry is "<<harry.favChar<<endl;
    

    return 0;
}