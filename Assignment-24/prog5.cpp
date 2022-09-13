#include <iostream>
#include <conio.h>

using namespace std;
int fiboo(int);
int main()
{
    int n;
    cout << "Enter number:" << endl;
    cin >> n;
    cout << fiboo(n);
}
int fiboo(int n)
{
    int i, fibo = 0, flag = 0;
    int n1 = 0, n2 = 1, n3;
    printf("%d %d", n1, n2);
    for (i = 1; i < n; i++)
    {
        n3 = n1 + n2;
        // printf(" %d", n3);
        n1 = n2;
        n2 = n3;
        int value = fiboo(i);
        printf("%d", value);
    
        if (n == value)
        {
            flag = 1;
            break;
        }
        if (value > n)
        {
            break;
        }
    }

    if (flag == 1)
    {
        cout << "NUmber is fibonacci number" << endl;
    }
    else
    {
        cout << "NUmber is not fibonacci number" << endl;
    }

    return 0;
}