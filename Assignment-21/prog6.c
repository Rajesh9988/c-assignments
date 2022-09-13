#include <stdio.h>
#include <conio.h>
#include<string.h>
struct sortsalry
{
    int id;
    char name[20];
    float slary;
};
void sort(struct sortsalry s[], int size);
struct sortsalry display(struct sortsalry b);
struct sortsalry input()
{
    struct sortsalry b1;
    printf("Enter 5 employee:-\n");
    scanf("%d", &b1.id);
    fflush(stdin);
    gets(b1.name);
    scanf("%f", &b1.slary);
    return b1;
}

void sort(struct sortsalry s2[], int size)
{
    int i, j;
    struct sortsalry temp;
    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            if (strcmp(s2[i].name , s2[j].name)>0)
            {
                temp = s2[i];
                s2[i] = s2[j];
                s2[j] = temp;
            }
        }
    }
}
struct sortsalry display(struct sortsalry b)
{
    printf("\n%d %s %f", b.id, b.name, b.slary);
}
int main()
{
    struct sortsalry s1[5];
    struct sortsalry s2;
    int i;
    for (i = 0; i <= 4; i++)
    {
        s1[i] = input();
    }

    sort(s1, 5);

    for (i = 0; i <= 4; i++)
    {
        display(s1[i]);
    }
}
