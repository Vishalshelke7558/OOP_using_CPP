# include <iostream>
using namespace std;

class employe
{
    int id;
    static int count;
    public:
    void set_id()
    {
        cout<<"entre the id of employe"<<endl;
        cin>>id;
        count++;
    }
    void get_id()
    {
        cout<<"the id of the employe number "<<count<<" is "<<id<<endl;
        
    }
    static void get_count() // static function
    {
        cout<<"the count of the id is "<<count<<endl;
    }

};

int employe ::  count; // count is the static data member

int main()
{
    employe vishal, kalpesh,sagar;
    vishal.set_id();
    vishal.get_id();
    employe :: get_count(); // use of static varible and we can use only static data member 
                            //  in the static function not for other member

    
    kalpesh.set_id();
    kalpesh.get_id();
    employe :: get_count();

    sagar.set_id();
    sagar.get_id();
    employe :: get_count();
    return 0;
}