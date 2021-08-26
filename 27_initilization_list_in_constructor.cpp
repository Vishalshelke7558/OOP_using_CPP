#include <iostream>
using namespace std;

class test
{
    int a, b;

public:
    //test(int i, int j) : a(i), b(j)
    //test(int i, int j) : a(i), b(i+j)
    //test(int i, int j) : a(i), b(2*j)
    //test(int i, int j) : b(j),a(b+i) // it weill print garbage value bacuse we declare abefore b
    test(int i, int j) : a(i), b(a +j)
    {
        cout << "contructor exicuted" << endl;
        cout<<"value of a is "<< a<<endl;
        cout<<"value of the b is "<<b<<endl;
    }
};

int main()
{
    test t(4,6);
    return 0;
}
