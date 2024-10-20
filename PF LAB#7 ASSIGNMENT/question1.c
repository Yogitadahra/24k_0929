  #include <stdio.h>
  int main()
{
   int numbers[10];
   int sum=0,i;
   printf("enter the numbers:");

   for (i=0;i<10;i++)
{
   scanf("%d",&numbers[i]);
}
   for (i=0;i<10;i++)
{
    printf("\n%d index has %d value",i,numbers[i]);
    sum=sum+numbers[i];
}
   printf("\nthe total sum of the numbers is %d",sum);
    return 0;
}