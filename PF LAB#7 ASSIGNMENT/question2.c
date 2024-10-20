  #include <stdio.h>
  int main()
{
  int values[8];
  int i;
  printf("enter the array values:");
  for (i=0;i<8;i++)
{
  scanf("%d",&values[i]);
}
  printf("\nvalues before reversing:");
  for (i=0;i<8;i++)
{
  printf("%d,",values[i]);
}
  printf("\nvalues after reversing:");
  for (i=7;i>=0;i--)
{
    printf("%d,",values[i]);
}

    return 0;
}