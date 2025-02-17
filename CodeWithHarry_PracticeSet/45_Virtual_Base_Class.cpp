#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_number(int rn)
    {
        roll_no = rn;
    }

    void print_number(void)
    {
        cout << " Roll no. of the student is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << " Marks of Maths : " << maths << endl;
        cout << " Marks of Physics : " << physics << endl;
    }
};
class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float s)
    {
        score = s;
    }
    void print_score(void)
    {
        cout << " Scores: " << score << endl;
    }
};
// If we remove virtual then print_number will be ambigous
class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << " Your total score is " << total << endl;
    }
};
int main()
{
    Result st1;
    st1.set_number(3);
    st1.set_marks(99, 89);
    st1.set_score(78.5);
    st1.display();
    return 0;
}