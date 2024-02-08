// Define a class Rectangle and define an instance member function to find the area of the rectangle.

#include<iostream>
using namespace std;

class Rectangle
{
    int length,breath;
    int area;
public:
    Rectangle(int a,int b)
    {
        length = a;
        breath = b;
    }
    void findrectangle()
    {
        area = length*breath;
    }
    void print()
    {
        cout<<"Area of rectangle "<<length<<" and "<<breath<<" = "<<area<<endl;
    }
};
int main()
{
    Rectangle r(2,3);
    r.findrectangle();
    r.print();
    return 0;
}
