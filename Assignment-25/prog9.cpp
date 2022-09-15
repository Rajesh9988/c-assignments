#include<iostream>
#include<conio.h>

using namespace std;
class circle
{
    private:
    int r;
    float a;
    public:

    void setdata(int x)
    {
        r = x;
    }

    void area()
    {
        a = 3.14*r*r;
    }

    void showarea()
    {
        cout<<"Area of circle is :> "<<a<<endl;
    }
};

int main()
{
    circle c1;
    c1.setdata(5);
    c1.area();
    c1.showarea();
}