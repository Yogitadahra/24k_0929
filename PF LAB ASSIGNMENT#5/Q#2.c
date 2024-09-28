   #include <stdio.h>
   int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    if (num<0)
{
    printf("\nit is a negative number");
}
    else if (num==0)
{
    printf("\nzero");
}
    else if (num>0 && num%2==0)
{
    printf("\nit is a positive and a even number");
}
    else if (num>0 && num%2==1)
{
    printf("\nit is a positive and a odd number");
}
    else
{
    printf("\ninvalid input");
}

    return 0;
}
