#include<stdio.h>
#include<conio.h>

struct employee
{
    int id;
    char name[30];
    float salary;
};
void inputdata()
{
    struct employee e1;
    printf("Enter a name :-\n");
    gets(e1.name);
    printf("Enter Id :-\n");
    scanf("%d",&e1.id);
    printf("Enter salary :-\n");
    scanf("%f",&e1.salary);

    printf("Print employee data:-\n");

    printf("Name is:- %s\n",e1.name);
    printf("Id is:- %d\n",e1.id);
    printf("Salary is:- %f\n",e1.salary);
}
int main()
{
    inputdata();
}