#include<stdio.h>
#include<string.h>
char reverse_string(char str1[]);
int main()
{
 char str1[30];
 printf("enter the string:");
 scanf("%s",str1);
reverse_string(str1);
 printf("reverse order is %s",str1);


}
char reverse_string(char str1[])
{
  int i,length;
  char temp;
  length=strlen(str1)-1;
  for(i=0;i<strlen(str1)/2;i++)
  {
   temp=str1[i];
   str1[i]=str1[length];
   str1[length--]=temp;
  }
}
