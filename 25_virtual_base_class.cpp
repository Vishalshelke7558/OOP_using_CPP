#include <iostream>
using namespace std;

/*
      student
    /        \
  test      sport
    \        /
      result  

*/

// here roll no is flows through the test and student which create ambiguties
// to avoid this we create a virtual class
//so roll no is avilable only one time in the result class

class student
{
protected:
    int roll_no;

public:
    void set_no(int x)
    {
        roll_no = x;
    }
    void get_no()
    {
        cout << "your roll number is " << roll_no << endl;
    }
};

class test : virtual public student
{
protected:
    int math, physics;

public:
    void set_marks(int x, int y)
    {
        math = x;
        physics = y;
    }

    void print_marks()
    {
        cout << "your result is " << endl;
        cout << "maths :" << math << endl;
        cout << "physics :" << physics << endl;
    }
};

class sport : virtual public student
{
protected:
    int score;

public:
    void set_score(int x)
    {
        score = x;
    }
    void get_score()
    {
        cout << "your PT score is " << score << endl;
    }
};

class result : public test, public sport
{
private:
    float total;

public:
    void display()
    {
        cout << "your result is " << endl;
        total = math + physics + score;
        get_no();
        print_marks();
        get_score();
        cout << "your total score is " << total << endl;
    }
};

int main()
{
    result vishal;
    vishal.set_no(420);
    vishal.set_marks(98, 100);
    vishal.set_score(100);
    vishal.display();
    return 0;
}