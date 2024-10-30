 #include <stdio.h>
  int main()
{
   int i,n;
   char compressed_word[100];
   printf("enter the number of strings you want to input:");
   scanf("%d",&n);
   char slogans[n][100];
   printf("\nenter strings:");
   for(i=0;i<n;i++)
  {
    scanf("%s",&slogans[i]);
  }
   printf("\nstrings entered are:");
   for (i=0;i<n;i++)
  {
    printf("\n%s",slogans[i]);
  }
   
  for (i=0;i<n;i++)
{
  compressed_word[100];
  int j=0,count=0;
  for (int k=0;slogans[i][k]!='\0';k++)
{
  if (k==0||slogans[i][k]!=slogans[i][k-1])
{
  compressed_word[j++]=slogans[i][k];
}
  else 
{
  count++;
}
}
   printf("\nthe removed numbers are %d",count);
   printf("\n%s",slogans[i]);
   printf("\n%s",compressed_word);
}

  return 0;
}