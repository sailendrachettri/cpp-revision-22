/* Date: 19 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b=9)
    {
        x = a;
        y = b;
    }

    void displayPoint(void){
        cout<< "The point is ("<<x<<", "<<y<<")."<<endl;
    }
};

int main()
{
    Point p(1, 0);
    p.displayPoint();

    return 0;
}
