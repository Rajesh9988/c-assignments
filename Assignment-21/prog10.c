#include<stdio.h>
#include<conio.h>
struct students
{
    char name[20];
    int rollno;
    int chem_marks;
    int math_marks;
    int phy_marks;
    int per;
};
struct students input()
{
    struct students s1;
 
    fflush(stdin);
    gets(s1.name);
    scanf("%d",&s1.rollno);
    printf("Enter chemistry marks\n");
    scanf("%d",&s1.chem_marks);
    printf("Enter math marks\n");
    scanf("%d",&s1.math_marks);
    printf("Enter physics marks\n");
    scanf("%d",&s1.phy_marks);
    return s1;
}
struct students show(struct students s)
{
    
    int total=0;
    printf("%s %d %d %d %d \n",s.name,s.rollno,s.chem_marks,s.math_marks,s.phy_marks);
    total =  s.chem_marks+s.math_marks+s.phy_marks/300*100;;

    printf(" percentage is : %f\n",total);

}
int main()
{
     struct students array[5],s;
     int i;
     for ( i = 1; i <=2; i++)
     {
        printf("\n");
        printf("enter %d students marks\n",i);
        array[i] = input();
     }
     for ( i = 1; i <=2; i++)
     {
        show(array[i]);
     }
     
     
     
}