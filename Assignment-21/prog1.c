#include <stdio.h>
#include <conio.h>
struct employee
{
    int id;
    char name[20];
    float salry;
};

int main()
{
    struct employee a;
    printf("enter a name:-\n");
    gets(a.name);
    printf("Enter Id:-\n");
    scanf("%d", &a.id);

    printf("Enter salary:-\n");
    scanf("%f", &a.salry);
     printf("\n");
    printf("Print employee data:\n");
    printf("Name is: %s\n", a.name);
    printf("ID: %d\n", a.id);
    printf("Salary: %f\n", a.salry);
}