# include <iostream>
# include <fstream>
# include<string>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample.txt"); // used to open the file 
    out<<"my name is vishal\n"; // we write in the file
    out<<"i am student \n";
    out<<"i love programming";
    out.close();

    // ifstream in; // used to read the file 
    // string st;
    // in.open("sample.txt");
    // getline(in,st);
    // cout<<st<<endl;
    // in.open("sample.txt");
    // getline(in,st);
    // cout<<st<<endl;
    // in.open("sample.txt");
    // getline(in,st);
    // cout<<st<<endl;
    // in.close(); // close the ifstream

    string st; // this is another way to open and read the file
    ifstream in;
    in.open("sample.txt");
    while(in.eof() == 0)
    {
        getline(in, st);
        cout<<st<<endl;

    }
    in.close();
    return 0;
}