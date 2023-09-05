#include<stdio.h>
#include<string.h>
char string_space(char str1[]);
int main()
{
  char str1[30]="Be good do good";
  //printf("enter the string:");
  //scanf("%[^\n]s",str1);
  string_space(str1);
  printf("the string is %s",str1);


}

char string_space(char str1[])
{
  for(int i=0;i<30;i++)
  {
    if(str1[i]==' ')
    {
      str1[i]='@';
    }
  }
}
