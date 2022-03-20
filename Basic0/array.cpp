// Date: 17 - 03 - 2022

#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {90, 43, 45, 78};

    // cout<< "marks[0] = "<<marks[0]<<endl;
    // cout<< "marks[1] = "<<marks[1]<<endl;
    // cout<< "marks[2] = "<<marks[2]<<endl;
    // cout<< "marks[3] = "<<marks[3]<<endl;

    int size = sizeof(marks) / sizeof(marks[0]);
    
    for(int i = 0; i < size; i++){
        cout<<marks[i]<<" ";
    }

    return 0;
}