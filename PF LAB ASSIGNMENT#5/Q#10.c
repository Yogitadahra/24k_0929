#include <stdio.h>
 
int main()
{
   int num ;
    printf("enter your number:");
    scanf("%d",&num);
    int digit;
    int sum=0;

    while (num>0)
{
    digit= num%10;
    sum=sum+digit;
     num=num/10;
          
}
     printf("sum=%d\n",sum);
    return 0;
}