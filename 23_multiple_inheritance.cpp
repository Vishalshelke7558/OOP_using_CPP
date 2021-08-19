#include <iostream>
using namespace std;

class base1
{
protected:
    int base1_int;

public:
    void set_base1_int(int x)
    {
        base1_int = x;
    }
};

class base2
{
protected:
    int base2_int;

public:
    void set_base2_int(int y)
    {
        base2_int = y;
    }
};

class derived : public base1, public base2
{
    public:
    void show()
    {
        cout<<"the value of base1 is "<<base1_int<<endl;
        cout<<"the value of base2 is "<<base2_int<<endl;
        cout<<"the sum of the base1 and base2 is "<<(base1_int + base2_int)<<endl;
    }

};

int main()
{
    derived c1;
    c1.set_base1_int(5);
    c1.set_base2_int(6);
    c1.show();
    return 0;
}