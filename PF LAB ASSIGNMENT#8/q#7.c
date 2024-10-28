  #include <stdio.h>
  int main()
{
  int arr[2][2]={{7,8},{1,2}};
  //transpose means change the rows in colums and vice versa.
  int i,j;
  printf("The matrix before transpose:\n");
   for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
{
    printf("%d\t",arr[i][j]);
}
   printf("\n");
}
   printf("\nThe matrix after transpose:\n");

   for (j=0;j<2;j++)
{
    for (i=0;i<2;i++)
{
    printf("%d\t",arr[i][j]);
}
   printf("\n");
}



    return 0;
}