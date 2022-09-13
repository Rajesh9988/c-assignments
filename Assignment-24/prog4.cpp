#include<iostream>
#include<conio.h>

using namespace std;
int fact(int);
int comb(int, int);
int main()
{
    int num1;
    cout<<"Enter number which you want to find factorail:"<<endl;
    cin>>num1;
    // cout<<"factorial "<<fact(num1);
    int i,j;
    for ( i = 0; i <num1; i++)
    {
        for (j = 0; j<=i; j++)
        {
            int k = 0;
            if(j==0){
            while (k++ <=(num1/2-i+1))
            {
                printf(" ");
            }
            }
            
            printf("%d ",comb(i,j));
        }
        printf("\n");
    }
    return 0;
    
}
// factorial function 
int fact(int a)
{
    int i ,fact;
    for ( i = 1; i <=a; i++)
    {
        fact = fact*i;
    }
    return fact;
    
}
int comb(int n,int r)
{
    int com;
     com = fact(n)/(fact(r)*fact(n-r));
    return com;
}
