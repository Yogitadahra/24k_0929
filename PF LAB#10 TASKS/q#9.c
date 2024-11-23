/*Write a recursive function that calculates the sum of digits of a number. For example, if
the input is 123, the output should be 6.*/

#include <stdio.h>
int sum(int num);
int main()
{
  int num;
  printf("enter the number:");
  scanf("%d",&num);
  printf("the sum of didits:%d",sum(num));
  
    return 0;
}
  int sum(int num)
  {
    if(num==0)
    {
      return 0 ;
    }
   return (num%10) + sum(num/10);
  }