#include <iostream>
using namespace std;
class base
{
protected:
    int a = 10;

private:
    int b;
};

/*
                       public derivation    private derivation   protected derivation

private member         not inherited        not inherited         not inherited

protected member       protected            private               protected

public member          public               private               protected


*/

class derived : protected base
{
   public:
   void display()
   {
       cout<<"the value of the protected data is  "<<a<<endl;
   }
};
int main()
{
    base b;
    derived d;
    //cout<<b.a; can not access bacuse of the protected

    d.display(); 
    // but we can access it through the member function of the derived class
    // a get inherited in the derived class
    return 0;
}