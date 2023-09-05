#include<stdio.h>
#include<string.h>
char occurance_of_ch(char str1[], char c);
int main()
{
 char str1[30],c,cnt;
 printf("enter the character to be searched:");
 scanf("%c",&c);
 printf("enter the string:");
 scanf("%s",str1);
 cnt=occurance_of_ch(str1,c);
 printf("character  occurs %d times\n",cnt);

}
char occurance_of_ch(char str1[], char c)
{
 int i,count=0,length;
 length=strlen(str1);
 for(i=0;i<length;i++)
 {
  if(str1[i]==c)
   count++;
 }
 return count;
}
