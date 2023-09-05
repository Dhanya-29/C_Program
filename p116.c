#include<stdio.h>
#include<string.h>
char string_upper(char str1[]);
int main()
{
 char str1[30];
 printf("enter the string:");
 scanf("%s",str1);
 string_upper(str1);
 printf("the uppercase of str1 is %s",str1);
}
char string_upper(char str1[])
{

  strupr(str1);

}
