#include<iostream>
#include<conio.h>

using namespace std;
int power(int,int);

int main()
{
    int x,y,pow;
    cout<<"enter X:-"<<endl;
    cin>>x;
    cout<<"Enter power of X:"<<endl;
    cin>>y;
    pow = power(x,y);
    cout<<pow;
}

int power(int a,int b)
{
    int x = 1,i;
    while (b--)
    {
      x = x*a;
    }
    return x;
}