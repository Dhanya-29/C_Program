#include<stdio.h>
#include<string.h>
char string_length(char str1[]);
int  main()
{
  char str1[30];
  int val;
  printf("enter the string1:");
  scanf("%s",str1);
  val=string_length(str1);
  printf("length of str1 is %d",val);
}
char string_length(char str1[])
{
    int val;
  val=strlen(str1);
  return val;


}
