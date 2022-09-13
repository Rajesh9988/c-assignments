#include<stdio.h>
#include<conio.h>
struct student
{
    int rollno;
    char name[20];
    float per;
};
struct student input();
struct student show(struct student s);
int main()
{
    struct student array[10];
    int i,j;
  printf("\nEnter student data:\n\n");
    for ( i = 0; i <10; i++)
    {
        array[i]= input();
    }
    for ( i = 0; i <10; i++)
    {
       show(array[i]);
    }
    
    
}

struct student input()
{
    struct student s1;
  
    fflush(stdin);
    printf("Enter student name:\n");
    gets(s1.name);
    printf("Enter student roll no:\n");
    scanf("%d",&s1.rollno);
    printf("\nEnter student percentage\n");
    scanf("%f",&s1.per);
    return s1;
}
struct student show(struct student s)
{
    printf(" %s    %d   %f \n",s.name,s.rollno,s.per);
}