#include <iostream>
using namespace std;
/*

case 1:
class B : public A
{
    oreder of the exicution of constructor  1. A   2. B
}

case 2
class A : publicB, public C
{
    order of exicution of the constructor 
    B -> C -> A
}

case 3

class A : public B, virtual public C
{
    order of the exicution of the constructor
    C -> B -> A
}


*/

class base1
{
    int data1;

public:
    base1(int x)
    {
        data1 = x;
        cout << "base1 class constructor is called" << endl;
    }
    void printdata_base1()
    {
        cout << "the value of the base1 data is " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int y)
    {
        data2 = y;
        cout << "base2 class constructor is called" << endl;
    }
    void printdata_base2()
    {
        cout << "the value of the base2 data is " << data2 << endl;
    }
};

class derived : public base1, public base2 // base1 -> base2 -> derived
{
    int derived1;
    int derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(c)
    {
        derived1 = c;
        derived2 = c;
        cout << "derived class contrsuctor is called " << endl;
    }
    void printdata_derived()
    {
        cout << "the value of the derived1 is " << derived1 << endl;
        cout << "the value of the derived2 is " << derived2 << endl;
    }
};

int main()
{
    derived vishal(1,2,3,4);
    vishal.printdata_base1();

    return 0;
}