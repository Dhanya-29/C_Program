#include<stdio.h>

#define N 5

int main()
{
    int a[N], i, *small;

    printf("Enter %d integer numbers\n", N);
    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);

    small = &a[N - 1];

    for(i = 0; i < N - 1; i++)
    {
        if( *(a + i) < *small)
            *small = *(a + i);
    }

    printf("Smallest Element In The Array: %d\n", *small);

    return 0;
}
