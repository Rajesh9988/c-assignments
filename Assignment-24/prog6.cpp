#include <iostream>
#include <conio.h>

using namespace std;
int swapvalue(int *x, int *y);
int main()
{

    int a, b;
    cout << "Enter A & B:-" << endl;
    cin >> a >> b;
    swapvalue(&a, &b);
    cout<<"A = "<<a<<" "<<"B = "<<b;
}
int swapvalue(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}