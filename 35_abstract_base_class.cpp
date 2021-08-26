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
    virtual void display() = 0; // pure virtual function or do nothing function
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

    // pure virtual function is used to de more derived classes
    // syntax virtual void display () = 0;
    // this is also called as do nothing function
    // if we make any pure virtual function then it is must to redefine it in
    // derived classes otherwise it gives an error
    return 0;
}