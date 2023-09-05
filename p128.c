#include<stdio.h>
int main()
{
    int number=100;
    int *p;
    p=&number;
    printf("the address of the variable is %x\n",p);
    printf("enter the vale of variable p is %d\n",*p);
    return 0;
}
