#include<iostream>
#include<conio.h>

using namespace std;

class area
{
   private:
    int raduis;
    int lenght,breath;
    int srq;
    float sum1;
    float sum2;
    float sum3;
    public:

    void setdata(int l,int b,int r,int s)
    {
        lenght =l;
        breath =b;
        raduis = r;
        srq = s;
    }

    void areaOfcircle()
    {
      sum1 = 3.14*raduis*raduis;   
    }

    void areaOfrectangle()
    {
        sum2 = lenght*breath;
    }

    void areaOfsquare()
    {
        sum3 = srq*srq;
    }

    void show()
    {
        cout<<"Area of circle is :> "<<sum1<<endl;
        cout<<"Area of rectangle is :> "<<sum2<<endl;
        cout<<"Area of square is :> "<<sum3<<endl;
    }
};

int main()
{
    int l,b,r,s;
    cout<<"Enter data:> "<<endl;

    cout<<"Enter L & B :> "<<endl;
    cin>>l>>b;
    cout<<"Enter radius :> "<<endl;
    cin>>r;

    cout<<"Enter square Lenght :> "<<endl;
    cin>>s;

    area a1;
    a1.setdata( l,b,r,s);
    a1.areaOfcircle();
    a1.areaOfrectangle();
    a1.areaOfsquare();
    a1.show();
}