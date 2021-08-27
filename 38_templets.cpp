# include <iostream>
using namespace std;

template <class T>
class vector
{
    public:
    T * arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v) // &v is the address of vector object
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this -> arr[i]* v.arr[i];
            
        }
        return d;
    }

};

int main()
{
    // vector v1(3);
    
    // we can run the coad without any templet also

    // v1.arr[0] = 2;
    // v1.arr[1] = 3;
    // v1.arr[2] = 4;

    // vector v2(3);
    // v2.arr[0] = 2;
    // v2.arr[1] = 3;
    // v2.arr[2] = 4;

    // int a = v1.dotproduct(v2);
    // cout<<"the dot product is "<<a<<endl;


    // vector <int>  v1(3); // we can use custome data type 

    // here we use templet for int value

    // v1.arr[0] = 2;
    // v1.arr[1] = 3;
    // v1.arr[2] = 4;

    // vector <int> v2(3);
    // v2.arr[0] = 2;
    // v2.arr[1] = 3;
    // v2.arr[2] = 4;

    // int a = v1.dotproduct(v2);
    // cout<<"the dot product is "<<a<<endl;


    vector <float>  v1(3); // we can use custome data type 
    // here we use templete for the float value
    v1.arr[0] = 2.5;
    v1.arr[1] = 3.9;
    v1.arr[2] = 4.8;

    vector <float> v2(3);
    v2.arr[0] = 2.4;
    v2.arr[1] = 3.9;
    v2.arr[2] = 4.3;

    float b = v1.dotproduct(v2);
    cout<<"the dot product is "<<b<<endl;

    // use of templet
    // we create one class and it will automatically get exicuted for the differeebt daatatype
    return 0;
}
