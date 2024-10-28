   #include <stdio.h>
   int main()
{
  int i,j=2;
  int num;
  printf("enter the number:");
  scanf("%d",&num);
  printf("%d,",j);
  for(i=3;i<=num;i++)
{
  for(j=2;j<i;j++)
{
   if(i%j==0)
{
    break;
}
   else if(j==i-1)
{
    printf("%d,",i);
}
}
}
    return 0;
}