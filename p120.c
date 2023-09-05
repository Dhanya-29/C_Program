#include<stdio.h>
#include<string.h>
char search_substr(char str1[],char str2[]);
int main()
{
  int check;
  char str1[30],str2[10];
  printf("enter the string 1:");
  scanf("%s",str1);
  printf("enter the string 2:");
  scanf("%s",str2);
  check=search_substr(str1,str2);
  if(check==-1)
     printf("\n substring not found\n");
  else
     printf("\n substring found at location %d",check+1);
  return 0;
}
char search_substr(char str1[],char str2[])
{
 int i=0,j=0,occu1;
 while(str1[i]!='\0')
 {
  while(str1[i]!=str2[0] && str1[i]!='\0')
  {
    i++;
  }
  if(str1[i]=='\0')
  return(-1);
  occu1=i;
  while(str1[i]==str2[j] && str1[i]!='\0' && str2[j]!='\0')
  {
   i++;
   j++;
  }
  if(str2[j]=='\0')
  return(occu1);
  if(str1[i]=='\0')
  return(-1);
  i=occu1+1;
  j=0;
 }
}



