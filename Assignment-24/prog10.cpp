#include<iostream>
#include<conio.h>
using  namespace std;
int sum(int,int );
float sum(float , float);

int main()

{

    int a,b;
    cout<<"Enter two number :>"<<endl;
    cin>>a>>b;

    cout<<"Sum of integer => "<<sum(a,b);
    cout<<"Sum of real =>  "<<sum(a,b);
}

int sum(int x,int y)
{
    int addition;
    addition = x+y;
    return addition;
}
float sum(float n1,float n2)
{
    float add;
    add = n1+n2;
    return add;
}