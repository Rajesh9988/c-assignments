#include<iostream>
#include<conio.h>

using namespace std;
int highest_digit(int);
int main()
{
    int num;
    cout<<"Enter number:"<<endl;
    cin>>num;
    cout<<highest_digit(num);
}

int highest_digit(int a)
{
    int max = -1;
    while (a)
    {
        if(max <a%10)
        {
            max = a%10;
            a = a/10;
        }
    }
    return max;
}