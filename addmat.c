#include <stdio.h>
int main()
{
      int row,col,row2,col2;
      printf("enter the no of row and column of first matrix:");
      scanf("%d%d",&row,&col);
      printf("enter the no of row and column of second matrix:");
     scanf("%d%d",&row2,&col2);
       if(row!=row2 || col!=col2){
     printf("Cannot add the matrices");
     return 0;
     }
      int A[row][col];
     printf("enter the elements of first matrix");
     for (int i=0;i<row;i++)
     {
      for(int j=0;j<col;j++)
     {
     scanf("%d",&A[i][j]);
     }
     }
     
     
     
     int B[row2][col2];
     printf("enter the elements of second matrix");
     for (int i=0;i<row2;i++)
     {
     for(int j=0;j<col2;j++)
     {
     scanf("%d",&B[i][j]);
     }
     }
    
     
     int result[row][col];
     for(int i=0;i<row;i++){
     for(int j=0;j<col;j++)
     {
     result[i][j]=A[i][j]+B[i][j];
     }
     }
     printf("the resultant matrix after addition is\n");
     for(int i=0;i<row;i++)
     { 
      for(int j=0;j<col;j++)
      {
     printf("%d\t",result[i][j]);
    }
    printf("\n");
    
    }
    return 0;
    } 
     
       
