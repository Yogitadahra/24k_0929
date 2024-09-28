  #include <stdio.h>
  int main()
{
  int age;
  printf("enter your age:");
  scanf("%d",&age);

  int status;
  printf("\nenter your citizenship status(0 for flase and 1 for true):");
  //true means you have a citizenship status and false means you dont have that.
  scanf("%d",&status);

   if (age>=18 && status==1)
{
    printf("\nyou are eligible to vote");
}
   else if (age>30 || status>0)
{
    printf("\nyou are eligible to vote");
}
   else
{
    printf("\nyou are not eligible to vote");
}
    return 0;
}