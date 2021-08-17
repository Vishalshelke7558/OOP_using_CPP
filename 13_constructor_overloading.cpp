#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y) // constructor with two argument
    {
        a = x;
        b = y;
    }

    complex(int x) // constructor with 1 argument
    {
        a = x;
        b = 0;
    }

    complex(void) // defalult constructor
    {
        a = 0;
        b = 0;
    }
    void display()
    {
        cout << "the given complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1(4, 1);
    c1.display();

    complex c2(6);
    c2.display();

    
    return 0;
}