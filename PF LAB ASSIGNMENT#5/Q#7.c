   #include <stdio.h>
   int main()
{
   int a ,b;
   printf("Enter the value of a:");
   scanf("%d",&a);
   printf("\nEnter the value of b:");
   scanf("%d",&b);
   int temp=0;

   a=a^b;
   b=b^a;
   a=a^b;
   printf("\nthe values after swaping are%d,%d",a,b);

    return 0;
}