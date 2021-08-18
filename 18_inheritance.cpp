#include <iostream>
using namespace std;

class employe
{
    int salary;

public:
    int id;
    employe(int emp_id)
    {
        id = emp_id;
        salary = 150;
    }
    employe()
    {

    }

    void get_data()
    {
        cout<<"the id of employe is "<<id<<endl;
    }
};

class programmer : employe // visibility mode is bi- default private
{
    public:
    int lng_coad = 9;
    programmer(int im_id)
    {
        id = im_id;
    }
};

int main()
{
    employe vishal(1), kalpesh(2);
    vishal.get_data();
    kalpesh.get_data();

    programmer aniket(1); 
    cout<<aniket.lng_coad<<endl;
    //cout<<aniket.id<<endl;   assesible when visibility mode is public
    return 0;
}  