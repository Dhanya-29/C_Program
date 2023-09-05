#include<stdio.h>
int main()
{
 int num1,num2,*p1,*p2;
 printf("enter the first no:");
 scanf("%d",&num1);
 printf("enter the second no:");
 scanf("%d",&num2);
 p1=&num1;
 p2=&num2;
 if(*p1>*p2)
 {
  printf("max no is %d",*p1);
 }
 else
 {
  printf("max no is %d",*p2);
 }
 return 0;
}
