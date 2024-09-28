   #include <stdio.h>
   int main()
{
   int num,digit,sum=0;
   printf("enter a number in the form of binary numbers:");
   scanf("%d",&num);
   while(num>0)
{
   digit=num%10;
   sum=sum+digit;
   num=num/10;
}
   printf("\nthe number of 1's in the number are:%d",sum);

    return 0;
}