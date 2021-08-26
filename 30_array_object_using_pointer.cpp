#include <iostream>
using namespace std;

class shop
{
    int id;
    int price;

public:
    void set_data(int a, int b)
    {
        id = a;
        price = b;
    }
    void display_data()
    {
        cout << "code of this item is " << id << endl;
        cout << "price of the " << id << " is " << price << endl;
    }
};


//      1   2   3
//      ^       ^
//      |       |
//      |      ptr
//   ptr_temp    



int main()
{
    int size = 3;
    shop *ptr = new shop[size];
    shop *temp_ptr = ptr;
    for (int i = 0; i < size; i++)
    {
        int p, q;
        cout << "entre the id item " << (i + 1) << endl;
        cin >> p;
        cout << "entre the prise of an item " << (i + 1) << endl;
        cin >> q;
        ptr->set_data(p, q);
        ptr++;
    }
    for (int j = 0; j < size; j++)
    {
        temp_ptr->display_data();
        temp_ptr++;
    }

    return 0;
}