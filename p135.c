#include<stdio.h>
int find_factorial(int,int*);
int main()
{
 int i,n,factorial;
 printf("enter a number:");
 scanf("%d",&n);
 find_factorial(n,&factorial);
 printf("factorial of %d is %d",n,factorial);
 return 0;
}
int find_factorial(int n,int *factorial)
{
 int i;
 *factorial=1;
 for(i=1;i<=n;i++)
 {
  *factorial=*factorial*i;
 }
}
