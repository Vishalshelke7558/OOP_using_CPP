#include <iostream>

using namespace std;

class channel
{
protected:
    string title;
    float rating;

public:
    channel(string s, float r)
    {
        title = s;

        rating = r;
    }
    virtual void display()
    {
        cout << "you forget to make base class function virtual" << endl;
    }
};

class vidio : public channel
{

    float vidio_length;

public:
    vidio(string s, float r, float vl) : channel(s, r)
    {
        vidio_length = vl;
    }
    void display()
    {
        cout << "this is amezing vidio with title" << title << endl;
        cout << "with vidio length " << vidio_length << " min" << endl;
        cout << "rating " << rating << " out of 5 " << endl;
    }
};

class channel_text : public channel
{

    int words;

public:
    channel_text(string s, float r, int wc) : channel(s, r)
    {
        words = wc;
    }

    void display()
    {
        cout << "this is amezing vidio with title" << title << endl;
        cout << "with word count " << words << " words" << endl;
        cout << "rating " << rating << " out of 5 " << endl;
    }
};

int main()
{
    string title;
    float rating, ve_len;
    int words;

    // vidio
    title = " THIS IS MY FIRST VIDIO ";
    ve_len = 4.5;
    rating = 5.56;
    vidio coading(title, rating, ve_len);
    // coading.display();

    //Text
    title = " THIS IS MY SECOND VIDIO";
    words = 420;
    rating = 5;
    channel_text coad(title, rating, words);
    //coad.display();

    channel *ptr[2];
    ptr[0] = &coading;
    ptr[1] = &coad;

    ptr[0]->display();
    ptr[1]->display();

    // by using virtual function we can called the perticular display function of the
    // perticular class.

    // rules of virtual function
    // - they can not be static
    // - they can access by using pointer
    // - virtual function can be a friend of the another class
    // - A virtual function in base class might not be used
    // - A virtual function define in the base class , there is no necessity to redefine 
    //   in the another class

    return 0;
}