#include <stdio.h>
int main()
{
  char table[6][5];
  int i,j,score=0;
  char search[100];
  for (i=0;i<6;i++)
{
    scanf("%s",&table[i]);
}
  for(i=0;i<6;i++)
{
    for(j=0;j<5;j++)
{
    printf("%c    ",table[i][j]);
}
   printf("\n");
}

  do
  {
    printf("\nenter the string you want to search:");
    scanf("%s",&search);
    for(i=0;i<6;i++)
   {
     
   }




  } while(search!="end");

  return 0;
}