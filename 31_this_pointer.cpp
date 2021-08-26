#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void get_data()
    {
        cout << "the value of a is " << a << endl;
    }
    void set_data(int a)
    {
        this->a = a;
    }
};

// this is keyword which is pointer which pont the object which invoke the
//member function
// if we not use this keyword and local varible and class varible having same name
// and we try to assign the value of the local varible to the class varible then it gives
// garbage value

int main()
{
    A a;
    a.set_data(5);
    a.get_data();

    return 0;
}