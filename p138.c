#include<stdio.h>
#define Num 5
int main()
{
    int a[Num], i, *ptr;

    printf("Enter %d integer numbers\n", Num);
    for(i = 0; i < Num; i++)
        scanf("%d", &a[i]);

    ptr = &a[Num - 1];

    printf("\nElements of array in reverse order ...\n");
    for(i = 0; i < Num; i++)
        printf("%d\n", *ptr--);

    return 0;
}
