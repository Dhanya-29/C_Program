#include<stdio.h>
#include<string.h>
char string_sort(char str[]);
int main()
{
 char str[100],temp;
 int i,j,length;
 printf("enter the string:");
 scanf("%s",str);
 string_sort(str);
 printf("\n the string in ascending order is %s\n",str);

}
char string_sort(char str[])
{
 char temp;
 int length;
 length=strlen(str);
 for(int i=0;i<length;i++)
 {
  for(int j=0;j<(length-1);j++)
  {
   if(str[j]>str[j+1])
   {
    temp=str[j];
    str[j]=str[j+1];
    str[j+1]=temp;
   }
  }
 }
}
