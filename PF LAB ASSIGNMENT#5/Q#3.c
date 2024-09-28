  #include <stdio.h>
  int main()
{
   int n;
   printf("enter the number:");
   scanf("%d",&n);


   if (n%3==0 && n%5==0)
{
    printf("\n it is a multiple of both 3 and 5");
}
   else
{
    printf("\n it is not a multiple of both 3 and 5");
}


    return 0;
}