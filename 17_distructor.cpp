# include <iostream>
using namespace std;

class num
{
    static int count;
    public:
    num()
    {

        count++;
        cout<<"creating a constructor for object "<<count<<endl;
    }

    ~num() // distructor 
    {
        cout<<"calling a distructor for object "<<count<<endl;
        count--;
    }

};

int num :: count = 0;

int main()
{
    
    cout<<"we are in the main function now "<<endl;
    cout<<"creating first object of the class "<<endl;
    num n1;

    {
        cout<<"entering into the block "<<endl;
        cout<<"creating a two new object"<<endl;
        num n2,n3;
        cout<<"exiting the block "<<endl;

    }
    cout<<"we are at the end of the main function "<<endl;

    return 0;
}