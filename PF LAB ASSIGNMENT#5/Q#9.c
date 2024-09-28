#include <stdio.h>

  int main()
{
  int year;
  printf("Enter the year:",year);
  scanf("%d",&year);

  if (year%100==0 && year%400==0)
{
   printf("\nit is a leap year");

}
  else if (year%4==0)
{
   printf("\nit is a leap year");
}
  else 
{
    printf("\nit is not a leap year");
}

    return 0;
}