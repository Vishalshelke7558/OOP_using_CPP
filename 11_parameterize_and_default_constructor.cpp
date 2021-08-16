# include <iostream>
using namespace std;

class complex
{
    int a,b;
    public:
    complex(int, int); // declration of constructor
    void display()
    {
        cout<<"given complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex :: complex(int x, int y) // parametrise constructor
{
    a = x;
    b = y;
}

int main()
{
    // call by implisitly
    complex o1(5,4);
    o1.display();

    // call by explicitly
    complex o2 = complex(6,7);
    o2.display();

    return 0;
}