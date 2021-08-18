# include <iostream>
using namespace std;

class base
{
    int data1;  // this is private and not inheritable
    public:
    int data2;
    void set_data();
    int get_data1();
    int get_data2();
};

void base :: set_data()
{
    data1 = 10;
    data2 = 20;
}

int base :: get_data1()
{
    return data1;
}

int base :: get_data2()
{
    return data2;
}

class derived : public base // class derived publicilly
{
    int data3;
    public:
    void process();
    void display();

};

void derived :: process()
{
    data3 = data2*get_data1();
}

void derived :: display()
{
    cout<<"value of data 1 is "<<get_data1()<<endl; 
    // data1 is the private member of the private class hence we asses it by using method   

    cout<<"value of data 2 is "<<data2<<endl;
    // data2 is the public member of the base class hence it can asses directly
    
    cout<<"value of data 3 is "<<data3<<endl;
    
}

int main()
{
    derived der;
    der.set_data();
    der.process();
    der.display();
    return 0;
}