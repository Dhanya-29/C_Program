#include<stdio.h>
int stopwatch(int seconds);
int main()
{
    int min,sec;
    printf("enter the time in minutes");
    scanf("%d",&min);
    sec=60*min;
    stopwatch(sec);
    return 0;
}
int stopwatch(int seconds)
{
    for(int i = seconds; i>=0; i--)
    {
        printf("%003d ",i);
    }
}
