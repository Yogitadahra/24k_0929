  #include <stdio.h>
  int main()
{
   int num;
   printf("enter the number:");
   scanf("%d",&num);
   int i,j;

   if(num%2!=0)
  {

   for(i=num;i>0;i-=2)
  {
    for(j=i;j>0;j-=2)
  {
    printf("%d  ",j);
  }
    printf("\n");
  }

  }
    else 
  {
    printf("enter odd number");
  }

  return 0;
}