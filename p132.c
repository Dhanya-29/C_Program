#include<stdio.h>
int main()
{
 int arr[100],n,i;
 printf("enter the no of elements to store:");
 scanf("%d",&n);
 printf("input %d no of elements:",n);
 for(i=0;i<n;i++)
 {
  printf("element-%d:",i);
  scanf("%d",arr+i);
 }
 printf("the elements you entered are:");
 for(i=0;i<n;i++)
 {
  printf("element-%d:%d\n",i,*(arr+i));
 }
 return 0;
}
