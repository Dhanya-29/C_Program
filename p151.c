#include<stdio.h>
int sum_of_series(int first,int last);
int main()
{
    int num1,num_last;
    printf("enter the first and last values:\n");
    scanf("%d%d",&num1,&num_last);
    int result=sum_of_series(num1,num_last);
    printf("The sum is:%d",result);
    return 0;
}
int sum_of_series(int first,int last)
{
    for(int i=first+1; i<=last; i++)
    {
        int res=first+i;
        first=res;

    }
return first;
}
