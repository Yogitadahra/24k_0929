  #include <stdio.h>
  #include <string.h>
  int main()
{  
  int n;
  printf("enter the number of strings you want to input:");
  scanf("%d",&n);
   char repeatens[n][50];
   int i=0;
   for(i=0;i<=n;i++)
  {
   fgets(repeatens[i],50,stdin);
  }
   
   for (i=0;i<=n;i++)
  {
    puts(repeatens[i]);
  }


  return 0;
}
