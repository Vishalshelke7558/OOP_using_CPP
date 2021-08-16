# include <iostream>
using namespace std;

class complex
{
    int a,b;
    public:
    complex(void);
    void display()
    {
        cout<<"given complex number is "<<a<<" + "<<b<<"i"<<endl;
    };
};

complex :: complex(void) // default constructor i.e. it does not take any parameter
{
    a = 10;
    b = 5;
}



int main()
{
    complex c1, c2, c3;
    // no requrement of calling set value function
    c1.display();
    c2.display();
    c3.display();
    
    return 0;
}