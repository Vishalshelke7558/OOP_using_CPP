#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number() // default constructor
    {
        a = 0;
    }

    number(int num) // parametarize constructor
    {
        a = num;
    }

    number(number & obj) // copy constructor
    {
        cout<<"copy constructor called "<<endl;
        a = obj.a;
    }

    void display()
    {
        cout<<"the number is "<<a<<endl;
    }


};

int main()
{
    number x,y,z(5),d,f,g;
    z.display();
    x.display();

    number c(z); // copy constructor invoke
    c.display();

    d = z;
    d.display(); // copy constructor does not invoke (here only assignment)

    number e = z;
    e.display();

    return 0;
}