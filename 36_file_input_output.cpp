# include<iostream>
# include<cstring>
# include <fstream> // it gives standard classes for working with files

// the useful classes for wworking with filws in cpp are
// 1 - fstearmbase
// 2 - ifstream  --> derived from fstreanbase
// 3 - ofsteram  --> derived from fstreanbase

// in order to work with file in cpp there are two way to open the file
//    1 - using the constructor
//    2 - using the member function open() of the class


using namespace std;
main()
{
    // opening file using constructor and reading it
    string st = "vishal is good boy";

    string st2; // used to store the content which are read from the file

    // ofstream out("sample.txt"); // class used to write in the file
    // out << st;

    ifstream in("sample.txt");
    //in>>st2; // this will read only one word of the line
    // getline(in,st2); // this will print complete onle line from the file.
    cout<<st2<<endl;
    //getline(in,st2);
    

    
    
    cout<<st2; 
    return 0;
    
}