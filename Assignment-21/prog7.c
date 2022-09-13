#include <stdio.h>
#include <conio.h>
struct time
{
    int hrs;
    int min;
    int sec;
};
void difference(struct time start, struct time stop, struct time *diff);
int main()
{
    struct time start;
    struct time stop, dif, p;
    
    printf("Enter start time:\n");
    scanf("\n %d %d %d", &start.hrs, &start.min, &start.sec);
    fflush(stdin);
    printf("Enter stop time:\n");
    scanf("%d %d %d", &stop.hrs, &stop.min, &stop.sec);

     difference(start, stop, &dif);

    printf("Start time: %d:%d:%d\n",start.hrs,start.min,start.sec);
    printf("Stop time:  %d:%d:%d\n",stop.hrs,stop.min,stop.sec);
    printf(" Time difference is:    %d:%d:%d\n",dif.hrs,dif.min,dif.sec);
}
void difference(struct time start, struct time stop, struct time *diff)
{
    while (stop.sec > start.sec)
    {
        --start.min;
        start.sec += 60;
    }
        diff->sec = stop.sec - start.sec;
    while (stop.min > start.min)
    {
        --stop.hrs;
        start.min += 60;
    }
        diff->min = stop.min - start.min;
        diff->hrs = stop.hrs - start.hrs;
}