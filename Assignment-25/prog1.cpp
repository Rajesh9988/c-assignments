#include <iostream>
#include <conio.h>
using namespace std;

class complex
{
private:
    int a;
    int b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata(complex c)
    {
        cout << a << " + " << b << "i" << endl;
        cout << c.a << " + " << c.b << "i" << endl;
    }

    void display(complex c)
    {
        cout << a + c.a << " + " << b + c.b << "i" << endl;
    }
};
int main()
{
    complex obj1, obj2;
    obj1.setdata(5, 6);
    obj2.setdata(8, 9);
    obj1.showdata(obj2);
    cout<<"__________"<<endl;
    obj1.display(obj2);
}