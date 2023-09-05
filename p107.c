#include<stdio.h>
int large_val(int mat[100][100]);
int main()
{
   int mat[100][100],i,j,small,large,row,col,res1;
   printf("enter the no of rows and col:");
   scanf("%d %d",&row,&col);
   printf("enter the no of elements in the matrix:");
   for(i=0;i<row;i++)
   {
     for(j=0;j<col;j++)
     {
      scanf("%d",&mat[i][j]);

     }
   }
   res1=large_val(mat);
   printf("the largest element is %d\n",res1);
}
int large_val(int mat[100][100])
{
    int row,col,i,j;
    int large;
    for(i=0;i<row;i++)
   {
     for(j=0;j<col;j++)
     {
         if(mat[i][j]>large)
            large=mat[i][j];
     }
   }
   return large;
}



