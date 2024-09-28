  #include <stdio.h>
   int main()
{
   int a;
   printf("a=");
   scanf("%d",&a);
   int b;
   printf("\nb=");
   scanf("%d",&b);
   int c;
   printf("\nc=");
   scanf("%d",&c);

   if (a>b && a>c)
{
    printf("\na is the greatest");
}
   
   else if (b>a && b>c)
{
    printf("\nb is the greatest");
}
    else
{
    printf("\nc is the greatest");
}
   return 0;
 }