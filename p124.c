#include<stdio.h>
#include<string.h>
char remove_duplicate(char str[],int n);
int main()
{
 char str[30];
 printf("enter any string:");
 scanf("%s",str);
 int n=sizeof(str)/sizeof(str[0]);
  remove_duplicate(str,n);
  printf("string after removing duplicates is %s",str);

}
char remove_duplicate(char str[],int n)
{
  int j,i,index=0;
  for(int i=0;i<n;i++)
  {
      for(j=i+1;j<str[j]!='\0';j++)
      {
       if(str[j]==str[i])
       {
        for(int k=j;str[k]!='\0';k++)
        {
            str[k]=str[k+1];
        }
       }
      }

  }
}


