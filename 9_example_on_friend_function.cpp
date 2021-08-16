#include <iostream>
using namespace std;

class c2;

class c1
{
    int val;

public:
    void set_data(int a)
    {
        val = a;
    }
    void display()
    {
        cout << "the value of the val is " << val << endl;
    }
    friend void exchange(c1 &, c2 &);
};

class c2
{
    int val2;

public:
    void set_data(int a)
    {
        val2 = a;
    }
    void display()
    {
        cout << "the value of the val is " << val2 << endl;
    }
    friend void exchange(c1 &, c2&);
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val;
    x.val = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 o1;
    c2 o2;
    o1.set_data(5);
    o2.set_data(6);
    cout << "the value before exchange are " << endl;
    o1.display();
    o2.display();

    exchange (o1, o2);

    cout << "the value before exchange are " << endl;
    o1.display();
    o2.display();
    return 0;
}