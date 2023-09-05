#include<stdio.h>
int main()
{
 int num1,num2,*p,*q,sum;
 printf("enter two integers to add:");
 scanf("%d %d",&num1,&num2);
 p=&num1;
 q=&num2;
 sum=*p+*q;
 printf("the sum of numbers is %d\n",sum);
 return 0;
}


