  #include <stdio.h>
  int main()
{
   int arr[3][3];
   int i,j,k;
   int mininrow,maxincol;
   printf("enter the elements of matrix:");

   for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
  {
    scanf("%d",&arr[i][j]);
  }
  }
    printf("\nthe matrix elements are:\n");
   for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
  {
    printf("%d  ",arr[i][j]);
  }
    printf("\n");
  }
 
   for (i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
  {
    maxincol=arr[i][j];
    mininrow=arr[i][j];
    for(k=0;k<3;k++)
  {
    if(arr[i][k]<mininrow)
  {
    mininrow=arr[i][k];
  }
    if(arr[k][j]>maxincol)
  {
    maxincol=arr[k][j];
  }
  }
  if(maxincol==arr[i][j] && mininrow==arr[i][j])
  {
    printf("\n%d is the saddle point located in the %d row and &d column",arr[i][j],i,j);
  }
  }  

}
    
    return 0;
}