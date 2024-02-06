// Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to set
// values for time and display values of time.


#include<iostream>
using namespace std;

class Time
{
    int hour,min,sec;
public:

    Time(int h,int m,int s)
    {
        hour = h;
        min = m;
        sec = s;
    }
    void print()
    {
        cout<<" Time =>> "<<hour<<"Hour "<<min<<"Minute "<<sec<<"second "<<endl;
    }
};
int main()
{
    int x,y,z;
    cout<<"Enter the hour, min, sec"<<endl;
    cin>>x>>y>>z;
    Time t = Time(x,y,z);
    t.print();
    return 0;
}
