 #include <stdio.h>
 int main()
{

  int arr1[3][3]={{1,2,7},{4,7,2},{2,3,4}};
  int arr2[3][3]={{3,4,5},{6,1,2},{4,8,7}};
  int res[3][3]={{0,0,0},{0,0,0},{0,0,0}}; 
  int i,j,k;

  for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
{
   for(k=0;k<3;k++)
{
    res[i][j]+=arr1[i][k]*arr2[k][j];
}
    printf("%d\t",res[i][j]);
}
   printf("\n");
}

    return 0;
}