#include <iostream>
using namespace std;

class y;

class x
{
    int data;

public:
    void set_value(int a1)
    {
        data = a1;
    }
    friend void add_number(x, y);
};


class y
{
    int num;

public:
    void set_value(int b1)
    {
        num = b1;
    }
    friend void add_number(x, y);
};


void add_number(x o1, y o2)
{
    cout << "the sum is " << (o1.data + o2.num);
}


int main()
{
    x o1;
    o1.set_value(5);

    y o2;
    o2.set_value(6);

    add_number(o1, o2);
    return 0;
}