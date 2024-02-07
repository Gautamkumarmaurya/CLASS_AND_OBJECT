//     Define a class ReverseNumber and define an instance member function to find Reverse
//     of a Number using class.


#include<iostream>
using namespace std;

class Reversenumber
{
    int num;
    int reverse;
public :

        Reversenumber(int a)
        {
            num = a;
        }
        void findReverse()
        {
            int n=num;
            reverse = 0;
            while(num)

            {
                reverse = reverse *10 +  num%10;
                num = num/10;

            }
        }
        void print()
        {
            cout<<"Reverse number "<<num<<" is "<<reverse<<endl;
        }
};
int main()
{

    Reversenumber r = Reversenumber(347);
    r.findReverse();
    r.print();
    return 0;
}
