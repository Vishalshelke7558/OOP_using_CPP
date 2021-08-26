#include <iostream>
using namespace std;

class base
{
public:
    int base_var;
    virtual void display() // make virtual function to exicute the fun of derived class
    {
        cout << "the value of the base_var is " << base_var << endl;
    }
};

class derived : public base
{
public:
    int derived_var = 2;
    void display()
    {
        cout << "the value of the base_var is " << base_var << endl;
        cout << "the value of the derived_var is " << derived_var << endl;
    }
};

int main()
{
    base obj1;
    derived obj2;
    base * base_ptr;
    base_ptr = & obj2;  // we point the pointer of the base class to the object of the derived class
    base_ptr -> base_var = 5;
    
    base_ptr -> display();


    // if we assign the pointer of the base class to the object of the derived class
    // and we want to exicute the function of the derived class
    // then virtual function is used

    // if we make the function of base class is virtual then function of the derived class
    // is exicuted

    
    return 0;
}