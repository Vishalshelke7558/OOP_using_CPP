# include <iostream>
using namespace std;

class simple
{
    int a,b;
    public:
    simple(int x, int y = 5)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout<<"the given complex number is "<<a<<" + "<<b<<"i"<<endl;
    }

};
int main()
{
    simple s1(2);
    s1.display();
    
    return 0;
}