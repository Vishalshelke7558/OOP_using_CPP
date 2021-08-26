#include <iostream>
using namespace std;

class base
{
public:
    int var1;
    void display()
    {
        cout << "displaying base class varible " << var1 << endl;
    }
};
class derived : public base
{
public:
    int var2;
    void display()
    {
        cout << "displaying base class varible " << var1 << endl;
        cout << "displaying derived class varible " << var2 << endl;
    }
};

// if we call display then it call the base class function
// this is called " late binding "
// bacuse the pointer is of base class

int main()
{
    base *base_pointer;
    base obj1;
    derived obj2;
    base_pointer = & obj2; // we point the base class pointer to the derived class object
    
    base_pointer -> var1 = 34; // assigning the value of the base class varible
    //base_pointer -> var2 = 134;    this will throw error 
    // we can acess only the inherited member of the base class from derived class

    base_pointer -> display();

    derived * derived_pointer = & obj2;
    derived_pointer -> var2 = 50;

    derived_pointer -> display();

    // here 2 display function and compiler decide which function is goes to  exicute
    // during the run time hence this is called as run time polymorphism
    // binding done according to the type of pointer hence this is called late binding
    // i.e if pointer is of base class then it bind to the base class function
    // no matter wether the pointer store the address of the derived class object 

    
   
    return 0;
}