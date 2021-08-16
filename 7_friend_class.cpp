#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumrealcomplex(complex , complex );
    int sumcompcomplex(complex, complex);
};


class complex
{
    int a, b;

    // individually declaring functions as a friend 

    //friend int calculator ::sumrealcomplex(complex o1, complex o2);
    ///friend int calculator :: sumcompcomplex(complex o1, complex o2);

    // alternative way declearing a entire class as a friend
    
    friend class calculator;


public:
    void set_no(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    void get_no()
    {
        cout << "the given complex number is " << a << " + " << b << "i" << endl;
    }
};


int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.set_no(5,4);
    o2.set_no(4,3);

    calculator calc;
    int result_real = calc.sumrealcomplex(o1,o2);
    cout<<"the sum of the real part of the complex number is "<<result_real<<endl;

    int result_com = calc.sumcompcomplex(o1,o2);
    cout<<"the sum of the complex part of the compelx number is "<<result_com<<endl;

    return 0;
}