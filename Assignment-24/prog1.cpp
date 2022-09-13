#include<iostream>
#include<conio.h>

using namespace std;
int prime(int);
int main()
{
    int num;
    prime(num);
    
}
int prime(int a)
{
cout<<"Enter number:-"<<endl;
    cin>>a;
    if (a%2==0)
    {
        cout<<"number is prime...."<<endl;
    }
    else
    {
        cout<<"Number is not prime...."<<endl;
    }
    return a;
}