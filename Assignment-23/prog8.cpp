#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    printf("Original value is: %d  %d\n",a,b);
    cout << "Swape value of A and B is:" << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d ",a,b);
}