#include<iostream>
#include<conio.h>

using namespace std;
class Square
{
   private:
    int num,count,i,sq;
    public:
void setvalue(int x)
{
    num = x;
}

void sqr()
{
    for ( i = 1; i<=num; i++)
    {
      sq =  i*i;
    }
    count++;
    cout<<"Squar of number is:> "<<sq<<endl;
    cout<<count;
    
}
};

int main()
{
    Square s1;
    s1.setvalue(6);
    s1.sqr();
}