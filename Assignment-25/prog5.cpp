#include<iostream>
#include<conio.h>

using namespace std;

class reversenumber
{
   private:
   int number;
   public:

   void setdata(int x)
   {
    number = x;
   }

   void reverse()
   {
    int rev,rem;
    int i;
    while (number!=0)
    {
        rem = number%10;
        rev = rev*10+rem;
        number/=10;
    }
        cout<<rev;
    
   }
};

int main()
{
    reversenumber r1;
    r1.setdata(567);
    r1.reverse();
}