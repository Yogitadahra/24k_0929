  #include <stdio.h>
  int main()
{
  int arr[2][3][3]={{{1,2,3},{3,4,5},{5,6,7}},
                   {{5,4,3},{9,9,1},{7,6,5}}};
                    
  int i,j,k,sum=0;

  for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
{
    for(k=0;k<3;k++)
{
    sum=sum+arr[i][j][k];
}
}
    printf("sum of %d page is %d\n",i+1,sum);
    sum=0;
}

    return 0;
}