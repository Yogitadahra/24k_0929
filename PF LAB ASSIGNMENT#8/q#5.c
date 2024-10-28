  #include <stdio.h>
  int main()
{
   int i,j,space;
   int n=5;

   for(i=5;i>0;i--)
{
    for(space=1;space<=(i-1);space++)
{
    printf(" ");
}
    for(j=5;j>=i;j--)
{
    printf("* ");
}
   printf("\n");
}
   for(i=n-1;i>0;i--)
{
    for(space=4;space>=i;space--)
{
        printf(" ");
}
   for (j=1;j<=i;j++)
{
    printf("* ");
}
   printf("\n");
}
    return 0;
}