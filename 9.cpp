// Define a class Circle and define an instance member function to find the area of the circle.

#include<iostream>
using namespace std;

class Circle
{
    float radius;
    float area;
public:
    Circle(float a)
    {
        radius = a;
    }
    void findcircle()
    {
        area = 3.14*radius*radius;
    }
    void print()
    {
        cout<<"Area of circle "<<radius<<" is "<<area<<endl;
    }
} ;
int main()
{
    float a;
    cout<<"Enter the radius "<<endl;
    cin>>a;
    Circle c = Circle(a);
    c.findcircle();
    c.print();
    return 0;
}
