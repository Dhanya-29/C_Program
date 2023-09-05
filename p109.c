#include<stdio.h>
int odd_array(int arr1[], int arr2[]);
int even_array(int arr1[], int arr3[]);
int main()
{
  int arr1[10],arr2[10],arr3[10],res1,res2;
  int num,i;
  printf("enter the no of elements in array:\n");
  scanf("%d",&num);
  printf("elements in array are:");
  for(i=0;i<num;i++)
  {
    scanf("%d",&arr1[i]);

  }
  res1=odd_array(arr1, arr2);
  printf("the odd elements in array are %d\n",res1);

  res2=even_array(arr1, arr3);
  printf("the even elements in array are %d\n",res2);
}

int odd_array(int arr1[10], int arr2[10])
{
   int num,i;
   for(i=0;i<num;i++)
    {
      if(arr1[10]%i!=0)
      {
        printf("%d",arr2[i]);
      }
    }
    return arr2[i];
}
int even_array(int arr1[], int arr3[])
{
    int num,i;
   for(i=0;i<num;i++)
    {
      if(arr1[10]%i==0)
      {
        printf("%d",arr3[i]);
      }
    }
    return arr3[i];
}

