   #include <stdio.h>
   int main()
{
   int num;
   printf("Enter the number:");
   scanf("%d",&num);

    num>0? num<0? printf("\n%d is a positive number",num) : printf("\n%dis a negative number",num):
    printf("\nnumber is zero",num);
   


    return 0;
}