  #include <stdio.h>
  int main()
{
  int arr[5];
  int i,j;
  int smallest,second_smallest;
  printf("enter array values:");
   for (i=0;i<5;i++)
{
    scanf("%d",&arr[i]);
}
   smallest=arr[0];
   second_smallest=arr[0];

   for (i=0;i<5;i++)
{
    if(arr[i]<arr[0])
{
    second_smallest=smallest;
    smallest=arr[i];
}
    else if(arr[i]<arr[0] && arr[i]!=smallest)
{
    second_smallest=arr[i];
}
}
   printf("\nthe second smallest number is %d",second_smallest);

    return 0;
}