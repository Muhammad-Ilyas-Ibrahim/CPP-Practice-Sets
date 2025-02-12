#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int rn);
    void get_roll_no(void);
};
void Student::set_roll_no(int rn)
{
    roll_no = rn;
}
void Student::get_roll_no(void)
{
    cout << "Roll no is: " << roll_no << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}
void Exam::get_marks()
{
    cout << "Marks of Maths : " << maths << endl;
    cout << "Marks of Physics : " << physics << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_no();
        get_marks();
        cout << "Your percentage is : " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    /*
    If we are inheriting B from A and C from B : [A-->B-->C]
    1. A is the base class of B and B is the base class of C
    2. A-->B-->C is called inheritance path
    */
    Result Ammad;
    int r, m, p;
    cout << "Enter the roll no. of Student: ";
    cin >> r;
    Ammad.set_roll_no(r);
    cout << "Enter the marks of Maths: ";
    cin >> m;
    cout << "Ener the marks of Physics: ";
    cin >> p;
    Ammad.set_marks(m, p);
    Ammad.display();
    return 0;
}