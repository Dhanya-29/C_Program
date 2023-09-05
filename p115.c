#include<stdio.h>
#include<string.h>
char string_comp(char str1[],char str2[]);
int main()
{
  char str1[30],str2[30];
  printf("enter the string 1:");
  scanf("%s",str1);
  printf("enter the string 2:");
  scanf("%s",str2);
  string_comp(str1,str2);
  if(strcmp(str1,str2)==0)
  {
   printf("yes str1 and str2 are same\n");
  }
  else
  {
    printf("no str1 and str2 are not same\n");
  }
}


char string_comp(char str1[],char str2[])
{
    strcmp(str1,str2);

}
