# include <iostream>
using namespace std;
int main()
{
    // basic example
    int a =4;
    int * ptr = & a;
    cout<<"the value of a is "<<*(ptr)<<endl;

    //new keyword
    int *p = new int(40); // create dynamic memory allocation
    cout<<"the value at address of p is "<<*(p)<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    
    for (int i = 0; i < 3; i++)
    {
        cout<<"the element of array are "<<arr[i]<<endl;
    }
    
    // delete operator

    delete[] arr; // delete operator free the memory of the array


    return 0;
}