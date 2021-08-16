# include <iostream>
using namespace std;

class complex
{
    int a,b;
    public:
    void set_no(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    friend complex sumcomplex(complex o1, complex o2);

    void get_no()
    {
        cout<<"the given complex number is "<< a << " + "<<b<<"i"<<endl;
    }
    
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.set_no((o1.a + o2.a),(o1.b + o2.b));
    return o3;

}
int main()
{
    complex c1, c2,sum;
    c1.set_no(1,4);
    c1.get_no();

    c2.set_no(5,6);
    c2.get_no();

    sum = sumcomplex(c1,c2);
    sum.get_no();
    return 0;
}