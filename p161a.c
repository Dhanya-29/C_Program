#include<stdio.h>
int main()
{
int num;
printf("Enter the no. of rows to be printed:\n");
scanf("%d",&num);
pattern(num);
return 0;
}
int pattern(int rows)
{
for(int i=0;i<=rows;i++)
{
for(int j=0;j<i;j++)
{
printf("1");
}
printf("\n");
}
}
