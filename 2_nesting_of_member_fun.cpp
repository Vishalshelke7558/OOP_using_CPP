#include <iostream>
#include <string.h>
using namespace std;

class binary 
{

private:
    string s;
    void check_binary(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary :: read(void)
{
    cout << "entre a binary number :" << endl;
    cin >> s;
}

void binary :: check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }
        
    }
    
}

void binary :: ones_compliment(void)
{
    check_binary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
        
    }
    
}

void binary :: display(void)
{
    cout<<"the given binary number is"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
    
}

int main()
{

    binary b;
    b.read();
    //b.check_binary();    it is part of private so we can not acess thorugh outsied
    b.display();
    cout<<"the ones_compliment of given binary number is"<<endl;
    b.ones_compliment();
    b.display();
    return 0;
}