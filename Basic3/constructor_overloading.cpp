/* Date: 19 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int a)
    {
        x = a;
        y = 0;
    }
    Point(int a, int b)
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
    Point p(1, 2);
    p.displayPoint();

    Point q(6);
    q.displayPoint();

    Point l;
    l.displayPoint();

    return 0;
}