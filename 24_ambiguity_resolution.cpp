#include <iostream>
using namespace std;

// ambiguity_1
class base1
{
public:
    void greet()
    {
        cout << "how are you " << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "kaise ho " << endl;
    }
};

class derived : public base1, public base2
{
public:
    void greet()
    {
        base2 ::greet();  // ambiguity resoution 
    }
};

// ambiguity_2

class B
{
    public:
    void say()
    {
        cout<<"hello world "<<endl;
    }

};

class D : public B
{
    public:
    void say() 
    
    // if derived class have the same function then it not go for the inheritance
    // it exicute its own function
    {
        cout<<"hello my friend "<<endl;
    }

};

int main()
{
    //ambiguity 1
    base1 obj_base1;
    base2 obj_base2;
    obj_base1.greet();
    obj_base2.greet();

    derived c1;
    c1.greet();

    //ambiguity 2
    D c2;
    c2.say();
    return 0;
}