#include <iostream>
#include <conio.h>
#include<math.h>

using namespace std;

class factorial
{
public:
    int fact;
    int sum;
    int i;

    void setfacto(int x)
    {
        fact = x;
    }

    void print()
    {
   
        for (i = 1; i<=fact; i++)
        {
            fact = fact * i;
            sum = fact;
        }
           cout <<"factorial is => "<<sum;
    }
    
};
    
int main()
{
    factorial f1;
    f1.setfacto(6);
    f1.print();
    
}