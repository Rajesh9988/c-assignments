#include <iostream>
#include <conio.h>

using namespace std;
int maximum(int, int);
float maximum(float, float);
int main()
{

    int a, b;
    cout << "Enter two number:> " << endl;
    cin >> a >> b;
    maximum(a, b);
    maximum(a, b);
}

int maximum(int x, int y)
{
    if (x < y)
    {
        cout << " %d is max number......" << y << endl;
    }
   
}
float maximum(float n1, float n2)
{
    if (n1 < n2)
    {
        cout << " %f is real max number......" << n2 << endl;
    }
  
}