   #include <stdio.h>
   int main()
{
   int a[6];
   int max_value,min_value;
   int i;
   printf("enter the values:");

   for (i=0;i<6;i++)
{
   scanf("%d",&a[i]);
}
   printf("\narray values:");
   max_value=a[0];
   min_value=a[0];

   for (i=0;i<6;i++)
{
    printf("%d,",a[i]);
    if(a[i]>max_value)
{  
     max_value=a[i]; 
}
   if (a[i]<min_value)
{
    min_value=a[i];
}
}
  printf("\nmaximum value:%d",max_value);
  printf("\nminimum value:%d",min_value);
    return 0;
}