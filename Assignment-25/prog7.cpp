#include<iostream>
#include<conio.h>

using namespace std;

class lergestnumber
{
    private:
    int num1,num2,num3;
    public:
        void setvalue(int x,int y,int z)
        {
            num1 = x;
            num2 = y;
            num3 = z;
        }
        void largest()
        {
            if (num1>num2)
            { 
                cout<<num1<<" is largest number"<<endl;
            }
            else if(num2>num3)
            {
                cout<<num2<<" is largest number"<<endl;
            }
            else 
            {
                cout<<num3<<" is largest number"<<endl;
            }
            
        }

};

int main()
{
    lergestnumber l1;
    l1.setvalue(190,1854,181);
    l1.largest();
}