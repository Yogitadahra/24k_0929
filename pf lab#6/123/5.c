  #include <stdio.h>
  int main()
{
  //(65536,32768,10922,2730,456,91,13,1,0)
  
  int n=65536;
  printf("(%d",n);

  for(int i=2;i<=9;i++)
{
  n=n/i;
  printf(",%d",n);
}
  printf(")");


    return 0;
}