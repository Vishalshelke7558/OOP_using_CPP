# include <iostream>
# include <string.h>
using namespace std;

class shop
{
    string item_id[100];
    int item_price[100];
    int counter;
public:
    void init_counter(void)
    {
        counter = 0;
    } 
    void set_price(void);
    void display_price(void);
};

void shop :: set_price(void)
{
    cout<<"entre the name of product "<<counter+1<<endl;
    cin>>item_id[counter];

    cout<<"entre the price of product "<<counter +1 << endl;
    cin>>item_price[counter];

    counter++;
}

void shop :: display_price(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"the price of "<<item_id[i]<<" is "<<item_price[i]<<endl;
    }
    
}

int main()
{
    class shop dukan;
    dukan.init_counter();
    for (int i = 0; i < 3; i++)
    {
        dukan.set_price();
    }
    
    dukan.display_price();
    return 0;
}