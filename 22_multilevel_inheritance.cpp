#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void set_number(int);
    void get_number();
};

void student ::set_number(int r)
{
    roll_no = r;
}

void student ::get_number()
{
    cout << "the roll number is " << roll_no << endl;
}

class exam : public student
{
protected:
    int math;
    int physics;

public:
    void set_marks(int, int);
    void get_marks();
};

void exam ::set_marks(int a, int b)
{
    math = a;
    physics = b;
}

void exam ::get_marks()
{
    cout << "the marks obtained in the physics are " << physics << endl;
    cout << "the marks obtained in the physics are " << math << endl;
}

class result : public exam
{
    int percent;

public:
    void display_result()
    {
        cout << "your percentage is " << (math + physics) / 2 << "%" << endl;
    }
};

int main()
{
    /*
        if we are inheriting B from A and C from B
        A ---> B ---> C

        A is the base class for B
        and B is base class for C
        A B C is called inheritance path

    */
    result vishal;
    vishal.set_number(420);
    vishal.set_marks(98, 98);
    vishal.display_result();

    return 0;
}