#include<stdio.h>
#include<string.h>
char string_cat(char str3[],char str1[], char str2[]);
int main()
{
  char str1[30],str2[30],str3[30];
  printf("enter the string 1:");
  scanf("%s",str1);
  printf("enter the string 2:");
  scanf("%s",str2);
  string_cat(str3,str1,str2);
  printf("the concatenated string is %s",str3);

}
char string_cat(char str3[], char str1[], char str2[])
{
 strcat(str1,str2);
 strcpy(str3,str1);
  return str3;
}
