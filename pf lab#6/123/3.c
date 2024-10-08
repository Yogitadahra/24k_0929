  #include <stdio.h>
  int main()
{
  int n;
  printf("enter the number:");
  scanf("%d",&n);

  for(int i=2;i<n;i++)
{
  if(n%i==0)
{
  printf("\n%d is a composite number",n);
  break;
}
   printf("\n%d is a prime number",n);
   break; 
}
   return 0;
}