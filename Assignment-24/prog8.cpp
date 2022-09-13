#include<iostream>
#include<conio.h>

using namespace std;
int area(int radius)
{
    return 3.14*radius*radius;
}
int area(int h,int w)
{
    return h*w;
}
float area(float x,float y)
{
    return (0.5*x*y);
}
int main()
{
    int r;
    int l,h;
    int a,b,c;
    cout<<"Area of Circle is:- "<<area(2)<<endl;
    cout<<"Area of rectangle is:- "<<area(5,8)<<endl;
    cout<<"Area of trangle is:- "<<area(3,8)<<endl;
}