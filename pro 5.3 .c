#include<stdio.h>
int main()
{
   int i,j,row,col;
   printf("Enter the array's row & column size: ");
   
   scanf("%d" , &row);
   scanf("%d" , &col);
   
   int arr[row][col];
   
   printf("Enter array's elements: \n");
   for (i = 0; i < row; i++)
   {
   for (j = 0; j < col; j ++)
   {
     scanf("%d" , &arr[i][j]);
   }
}

   printf("The transpose matrix of an array : \n ");
   
   for (i=0; i<col; i++)
{
   for (j=0; j<row; j++)
   {
    printf("%d", arr[j][i]);
   }
   printf("\n");
}
   }
   

