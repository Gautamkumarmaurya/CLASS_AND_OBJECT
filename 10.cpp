//      Define a class Area and define instance member functions to find the area of the different shapes 
//        like square, rectangle , circle etc.


#include<iostream>
using namespace std;

class Sqrtretcir
{
    int length;
    int breath;
    float area;
    int radius,a;
public:
    /*Sqrtretcir(int a, int b)
    {
        length = a;
        breath = b;
    }

    void findsqurtretcir()
    {
        area = length*breath;

    }
    void print()
    {
        cout<<"Area of rectangle "<<length<<" and "<<breath<<" is "<<area<<endl;

    }


     Sqrtretcir (float c)
    {
        radius = c;
    }
    void findsqurtretcir()
    {
        area = 3.14*radius*radius;
    }
    void print()
    {
        cout<<"Area of circle "<<radius<<" is "<<area<<endl;
    }*/

    Sqrtretcir (int c)
    {
        a = c;
    }
    void findsqurtretcir()
    {
        area = a*a;
    }
    void print()
    {
        cout<<"Area of spuare "<<a<<" is "<<area<<endl;
    }

};
int main()
{
    //Sqrtretcir r(2,3);
   // Sqrtretcir c(2);
     Sqrtretcir s(2);
   //r.findsqurtretcir();
    //c.findsqurtretcir();
    s.findsqurtretcir();
   //r.print();
    //c.print();
    s.print();
    return 0;
}

