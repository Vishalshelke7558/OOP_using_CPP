#include <iostream>
using namespace std;

class employe
{
    int id;
    int salary;

public:
    void set_id()
    {
        cout<<"entre the id of employe"<<endl;
        cin>>id;
    }

    void set_salary()
    {
        cout<<"entre the salary of the employe"<<endl;
        cin>>salary;
    }

    void get_id()
    {
        cout<<"the salary of employe having id "<<id<<" is "<<salary<<endl;
    }
};

int main()
{

    employe company[100];
    for (int i = 0; i < 4; i++)
    {
        company[i].set_id();
        company[i].set_salary();
        company[i].get_id();

    }
    
    

    return 0;
}