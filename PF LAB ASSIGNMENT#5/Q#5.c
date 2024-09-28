   #include <stdio.h>
   int main()
{
   int a,b;
   printf("a=");
   scanf("%d",&a);
   printf("\nb=");
   scanf("%d",&b);

   a>b? printf("\n%d is the greatest number",a):printf("\n%d is the greatest number",b);

   return 0;
}