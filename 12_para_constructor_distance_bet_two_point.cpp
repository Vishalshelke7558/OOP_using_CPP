# include <iostream>
# include <cmath>
using namespace std;

class point
{
    int x,y;
    public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    friend void distance(point , point );

    void display()
    {
        cout<<"the point is ("<<x<<","<<y<<")"<<endl; 
    }

};

void distance(point p,point q)
{
    double var_1 = (p.x - q.x)* (p.x - q.x);
    double var_2 = (p.y - q.y)*(p.y - q.y);
    cout<<"the distance between two point is "<< sqrt(var_1+var_2)<<" unit"<<endl;

}

int main()
{
    point p(5,6);
    p.display();
    point q(7,6);
    q.display();
    distance(p,q);
    return 0;
}