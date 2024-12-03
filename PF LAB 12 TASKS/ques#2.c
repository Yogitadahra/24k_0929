 #include <stdio.h>
 #include <stdlib.h>

 void multiplication(int **matric1,int **matric2,int **result,int rows,int col);

 int main()
 {
    int rows,col,i,j;
    printf("enter the number of rows:");
    scanf("%d",&rows);
    printf("enter the number of columns:");
    scanf("%d",&col);

    int **matric1=(int **)malloc(rows*sizeof(int *));
    int **matric2=(int **)malloc(rows*sizeof(int *));
    int **result=(int **)calloc(rows,sizeof(int *));

    for(i=0;i<rows;i++)
    {
      matric1[i]=(int *)malloc(col*sizeof(int));
      matric2[i]=(int *)malloc(col*sizeof(int));
      result[i]=(int *)calloc(col,sizeof(int));
    }

    printf("enter the elements of matrix 1:");
    for(i=0;i<rows;i++)
    {
      for(j=0;j<col;j++)
      {
         scanf("%d",&matric1[i][j]);
      }
    }
    printf("enter the elements of matrix 2:");
    for(i=0;i<rows;i++)
    {
      for(j=0;j<col;j++)
      {
         scanf("%d",&matric2[i][j]);
      }
    }
     multiplication(matric1,matric2,result,rows,col);
    
    printf("the resultant matrix is:\n");
    for(i=0;i<rows;i++)
    {
      for(j=0;j<col;j++)
      {
         printf("%d\t",result[i][j]);
      }
      printf("\n");
    }

    for(i=0;i<rows;i++)
    {
      free(matric1[i]);
      free(matric2[i]);
      free(result[i]);
    }

    free(matric1);
    free(matric2);
    free(result);


    return 0;
 }

 void multiplication(int **matric1,int **matric2,int **result,int rows,int col)
 {
   int i,j,k;
   
      for(i=0;i<rows;i++)
   {
      for(j=0;j<col;j++)
      {
         for(k=0;k<col;k++)
         {
            result[i][j]+=matric1[i][k]*matric2[k][j];
         }
      }
   }  
 }