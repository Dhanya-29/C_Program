#include<stdio.h>
#include<string.h>
char string_copy(char str1[20],char str2[20]);
int main()
{
  char str1[20],str2[20];
  printf("enter the string 1:");
  scanf("%s",str1);
  printf("str1 is %s\n",str1);
  string_copy(str1,str2);
  printf("str2 is %s\n",str2);
}
char string_copy(char str1[20],char str2[20])
{
  strcpy(str2,str1);
  return str2;
}
