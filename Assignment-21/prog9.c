#include<stdio.h>
#include<conio.h>
// struct for students details
struct stu
{
    char name[20];
    int rol;
    float per;
};
// input function 
struct stu input()
{
    struct stu s1;
    fflush(stdin);
    // printf("Enter student name:\n");
    gets(s1.name);
    // printf("Enter student roll number\n");
    scanf("%d",&s1.rol);
    // printf("Enter student percentage\n");
    scanf("%f",&s1.per);
    return s1;
}
// display function for students details
struct stu display(struct stu s)
{
     printf(" %s %d %f\n",s.name,s.rol,s.per);
}
// main function
int main()
{
    struct stu arr[50];
    int i,n;
    printf("Enter n students:\n");
    scanf("%d",&n);
    for ( i = 0; i<n; i++)
    { printf("Enter %d students data\n",i);
        arr[i] = input(arr);//calling main function
    }
    printf("display students details.........\n\n");
    for ( i = 0; i <n; i++)
    {
        display(arr[i]);//calling display function
    }
    
    
}
