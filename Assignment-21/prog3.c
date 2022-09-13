#include <stdio.h>
#include <conio.h>
struct employee
{
    int id;
    char name[20];
    float salry;
};
void display(struct employee a1)
{
     printf("Print employee data:\n");
    printf("Name is: %s\n", a1.name);
    printf("ID: %d\n", a1.id);
    printf("Salary: %f\n", a1.salry);
}

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
     display(a);
    getch();
}