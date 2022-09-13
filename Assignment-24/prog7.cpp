#include<iostream>
#include<conio.h>

using namespace std;

int addition(int a,int b,int c=0)
{
    return a+b+c;
}

int  main()
{
    cout<<"Addition of two parameters:- "<<addition(2,4)<<endl;
    cout<<"Addition of three parameters:- "<<addition(2,4,8)<<endl;
}

