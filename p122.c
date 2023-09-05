#include<stdio.h>
#include<string.h>
char conv_to_upper(char str[]);
int main()
{
 char str[100];
 int i;
 printf("enter a string:");
 scanf("%s",str);
 conv_to_upper(str);
 printf("after converting to uppercase is %s",str);
}
char conv_to_upper(char str[])
{
 int i=0;
 while(str[i]!='\0')
 {
     for(i=0;i<str[i];i++)
     {
         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
          {
              str[i]=str[i]-32;
          }
     }
  return str[i];
 }
}
