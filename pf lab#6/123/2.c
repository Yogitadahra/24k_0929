  #include <stdio.h>
  int main()
{
  int num;
  printf("enter the number:");
  scanf("%d",&num);

   while(num>=10)
{
    printf("\n%d is a multiple digit number",num);
    num=num/10;
   if (num<=9)
{
    printf("\n%d is a not it multiple digit number",num);
}
}
    return 0;
}