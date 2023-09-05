#include<stdio.h>
int main()
{

    time();
    return 0;
}
int time()
{
    for (int i=0; i<=1; i++)
    {
        for(int j=0; j<60; j++)
        {
            printf("%d:%02d\n",i,j);
        }
    }
}
