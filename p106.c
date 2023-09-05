#include<stdio.h>
int freq_array(int arr[100]);
int main()
{
   int arr[100],freq[100],i,j,count,arr_size;
   printf("enter the array size:");
   scanf("%d",&arr_size);
   printf("enter the elements in array:");
   for(i=0;i<arr_size;i++)
   {
     scanf("%d",&arr[i]);
     freq[i]=-1;
   }
   freq_array(arr);
   printf("%d accurs %d times\n",arr[i],freq[i]);

}
int freq_array(int arr[100])
{
  int i,j,arr_size,count=0,freq[100];
  for(i=0;i<arr_size;i++)
  {
    for(j=i+1;j<arr_size;j++)
    {
      if(arr[i]==arr[j])
      {

      count++;
      freq[j]=0;

      }
    }
    if(freq[i]!=0)
    {
     freq[i]=count;
    }
  }
  return 0;
}
