#include<stdio.h>
int main()
{
 char str[100],*p;
 int count;
 printf("enter any string:");
 scanf("%s",str);
 p=str;
 count=0;
 while(*p!='\0')
 {
  count++;
  p++;
 }
 printf("the length of the string is %d",count);
 return 0;
}
