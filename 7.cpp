// Define a class Greatest and define instance member function to find Largest among 3 numbers using classes.


#include<iostream>
using namespace std;

class Greatestnumber
{
    int  greatestnumber;
    int x,y,z;
public:
     Greatestnumber(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void findgreatestnumber()
    {
         greatestnumber = (x > y)? (x > z ? x : z) : (y > z ? y : z);
    }
    void print()
    {
        cout<<x<<" ,"<<y<<" ,"<<z<<"  Greatest number is = "<<greatestnumber<<endl;
    }

};
int main()
{
   int a,b,c;
   cout<<"Enter the three number"<<endl;
   cin>>a>>b>>c;
    Greatestnumber l =  Greatestnumber(a,b,c);
     l.findgreatestnumber();
    l.print();
    return 0;
}
