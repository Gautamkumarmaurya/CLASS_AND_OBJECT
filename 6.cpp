//   Define a class Square to find the square of a number and write a C++ program to Count
//   number of times a function is called.

#include<iostream>
using namespace std;

class Square
{
    int i;
    int sq;
    static int count;
public :
    Square(int x)
    {
        i = x;
    }
    void findsquare()
    {
        count++;
        sq = i*i;
    }
    void printcount()
    {
        cout<<"Count "<<count<<endl;
    }
};
int Square :: count;
int main()
{
    Square s(5);
    s.findsquare();
    s.printcount();
    
    return 0;
}
