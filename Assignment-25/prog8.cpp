#include<iostream>
#include<conio.h>

using namespace std;
class rectangle
{
  private:
    int l,b;
    float a;

    public:
    void setvalue(int x,int y)
    {
        l = x;
        b = y;
    }

    void area()
    {
        a= l*b;
    }

    void display()
    {
        cout<<"Area is "<<a<<endl;
    }
};

int main()
{
    rectangle r1;
    r1.setvalue(4,8);
    r1.area();
    r1.display();
}