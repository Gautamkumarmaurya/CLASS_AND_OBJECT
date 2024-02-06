// Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex number


#include<iostream>
using namespace std;

class complex
{
    int x,y;
public:

    complex(int real,int imaginary)
    {
        x = real;
        y = imaginary;
    }
    void print()
    {
        cout<<"Number is "<<x<<" + "<<y<<"i"<<endl;
    }
};
int main()
{
    int a,b;
    cout<<"Enter the two number"<<endl;
    cin>>a>>b;
   complex c = complex(a,b);
   c.print();
   return 0;

}
