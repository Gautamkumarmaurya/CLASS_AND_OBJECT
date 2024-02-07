//    Define a class LargestNumber and define an instance member function to find the
//    Largest of three Numbers using the class.


#include<iostream>
using namespace std;

class Largestnumber
{
    int largestnumber;
    int x,y,z;
public:
    Largestnumber(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void findlargestnumber()
    {
        largestnumber = (x > y)? (x > z ? x : z) : (y > z ? y : z);
    }
    void print()
    {
        cout<<x<<" ,"<<y<<" ,"<<z<<" Largest number is = "<<largestnumber<<endl;
    }

};
int main()
{
   int a,b,c;
   cout<<"Enter the three number"<<endl;
   cin>>a>>b>>c;
    Largestnumber l = Largestnumber(a,b,c);
     l.findlargestnumber();
    l.print();
    return 0;
}
