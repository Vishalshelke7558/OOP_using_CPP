#include <iostream>
using namespace std;

class bank_deposit
{
    int principal;
    int years;
    int rate;
    int return_value;

public:
    bank_deposit()
    {
    }
    bank_deposit(int p , int y, float r); // we take rate of intrest as a floating value
    

    bank_deposit(int p, int y, int r); // we take rate of intrest as a int value
    
    void display_return_value();
};


bank_deposit :: bank_deposit(int p, int y, float r)
{
    principal = p;
    years = y;
    rate = r;

    return_value = principal;
    for (int i = 0; i < years; i++)
    {
        return_value = return_value * (1 + rate);
    }
}


bank_deposit :: bank_deposit(int p, int y, int r)
{
    principal = p;
    years = y;
    rate = (float)r / 100;

    return_value = principal;
    for (int i = 0; i < years; i++)
    {
        return_value = return_value * (1 + rate);
    }
}


void bank_deposit :: display_return_value()
{
    cout << "the return  value after " << years << " is " << return_value << endl;
}

int main()
{
    
    int p,y;
    int r;
    float R;
    cout<<"entre the value of p ,y and r"<<endl;
    cin>>p>>y>>r;
    bank_deposit bd1(p,y,r);
    bd1.display_return_value();
    
    return 0;
}