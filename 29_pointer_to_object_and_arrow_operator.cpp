# include <iostream>
using namespace std;
class complex
{
    int real;
    int imag;
    public:
    void set_data(int a, int b)
    {
        real = a;
        imag = b;

    }
    void get_data()
    {
        cout<<"the real part is "<<real<<endl;
        cout<<"the imag part is "<<imag<<endl;
    }
};

int main()
{
    
    //complex *ptr = 

    // -> is known as a arrow aperator which is used to the dereferance the pointer
    // complex *ptr = new complex;
    // ptr -> set_data(5,4); 
    // ptr -> get_data();

    // array of object 
    // we can create an array of object 
    complex *ptr = new complex[3];
    ptr -> set_data(1,4);
    ptr -> get_data();
    return 0;
}