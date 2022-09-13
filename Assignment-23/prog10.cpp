#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int a[10],i;
    int sum=0;
    cout<<"Enter array Element"<<endl;
    for ( i = 0; i <6; i++)
    {
        scanf("%d",&a[i]);
    }
    cout<<"Sum of array elements is"<<endl;
    for ( i = 0; i < 6; i++)
    {
        sum = sum+a[i];
    }
    cout<<sum<<endl;
}