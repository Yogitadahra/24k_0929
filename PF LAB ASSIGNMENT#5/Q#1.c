  #include <stdio.h>
  int main()
{
   int age;
   printf("Enter your age:");
   scanf("%d",&age);

   if (age<=10)
{
    printf("\nyou are a child");
}
   else if (age>10 && age<18)
{
    printf("\nyou are a teenager");
}
   else if (age>=18 && age<=40)
{
    printf("\nyou are a adult");
}
    else
{
    printf("\nyou are a senior");
}

    return 0;
}