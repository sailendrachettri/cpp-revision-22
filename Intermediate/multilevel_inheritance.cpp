/* Date: 20 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void setTollNumber(int);
    void getRollNumber(void);
};

void Student::setTollNumber(int r)
{
    roll_no = r;
}

void Student::getRollNumber(void)
{
    cout << "Roll no: " << roll_no << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float, float);
    void getMarks(void);
};

void Exam::setMarks(float m, float p)
{
    maths = m;
    physics = p;
}

void Exam::getMarks(void)
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display(void)
    {
        getRollNumber();
        getMarks();
        cout << "Your percentage is " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    Result sai;
    sai.setTollNumber(101);
    sai.setMarks(90.4, 87.5);
    sai.display();

    return 0;
}