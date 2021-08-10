# include <iostream>
using namespace std;

class employe
{
    private:
        int a,b,c;
    public:
        int e,d;
        void setdata(int a1, int b1, int c1);
        void getdata()
        {
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        }

};

void employe :: setdata(int a1, int b1, int c1)
{
    a = a1; // verile of private we have to modify  it with in the class
    b = b1;
    c = c1;
}


int main()
{
    class employe vishal;
    vishal.setdata(1,2,4);
    
    vishal.d = 5; // these are the varible of public we can modify it out of the class
    vishal.e = 6;
    vishal.d = 7;// we can modify also
    vishal.getdata();
    return 0;
}