#include<stdio.h>
int mat_add(int mat1[][10], int mat2[][10], int mat3[][10]);
int mat_sub(int mat1[][10], int mat2[][10], int mat4[][10]);
int mat_mul(int mat1[][10], int mat2[][10], int mat5[][10]);
int rows,row2, columns,column2;
int main()
{
    int mat1[10][10],mat2[10][10],mat3[10][10],mat4[10][10],mat5[10][10],i,j,k,l;
    printf("enter the number of rows and columns(<=10):");
    scanf("%d %d",&rows,&columns);
    //printf("enter the no of row2 and column2 for mat2:");
   // scanf("%d %d",&row2,&column2);
    //while(columns!=row2)

    if(rows>10||columns>10)
    {
        printf("no of rows/column is greater than 10\n");
    }
    printf("enter the input for the mat1:");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            scanf("%d",&mat1[i][j]);

        }

    }
    printf("enter the input for mat2:");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            scanf("%d",&mat2[i][j]);

        }

    }
    mat_add(mat1, mat2, mat3);

    printf("matrix addition result is\n:");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            printf("%5d",mat3[i][j]);
        }
        printf("\n");
    }

    mat_sub(mat1, mat2, mat4);
    printf("subtraction of matrix is\n:");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            printf("%5d",mat4[i][j]);
        }
        printf("\n");
    }
   // mat_mul(mat1, mat2, mat5);
   // printf("multiplication of matrix is\n:",mat5[i][j]);
//    for(i=0; i<rows; i++)
//    {
//        for(j=0; j<column2; j++)
//        {
//            for(i=0; i<rows; i++)
//            {
//                for(j=0; j<column2; j++)
//                {
//                    for(l=0; l<columns; l++)
//                    {
//                        printf("%5d",mat4[i][j]);
//                    }
//                }
//            }
//        }
//        printf("\n");
//    }
  //  for(i=0; i<3; i++)
  //  {
      //  for(j=0; j<3; j++)
  //      {
    //        printf("%d\t",mat5[i][j]);
      //  }
        //printf("\n");
    //}
    //return 0;
}




int mat_add(int a[][10], int b[][10], int c[][10])
{
    int i,j;
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            c[i][j]=a[i][j]+b[i][j];

        }

    }
}
int mat_sub(int a[][10], int b[][10], int f[][10])
{
    int i,j;
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            f[i][j]=a[i][j]-b[i][j];

        }

    }

}
//int mat_mul(int a[][10], int b[][10], int k[][10])
//{
//  int i,j,l,column2;
//  for(i=0;i<rows;i++)
//    {
//      for(j=0;j<column2;j++)
//      {
//         k[i][j]=0;
//      }
//    }
//      for(i=0;i<rows;i++)
//      {
//        for(j=0;j<column2;j++)
//        {
//            for(l=0;l<columns;l++)
//            {
//                k[i][j] += a[i][j] * b[i][j];
//            }
//        }
//
//      }
//
//     return k[i][j];
//}

//int mat_mul(int a[][10], int b[][10], int k[][10])

//{
  //  for(int i=0; i<3; i++)
    //{
      //  for(int j=0; j<3; j++)
        //{
          //  k[i][j]=0;
            //for(int k=0; k<3; k++)
            //{
              //  k[i][j]+=a[i][k]*b[k][j];
            //}
        //}
    //}
    //return k[3][3];

//}

