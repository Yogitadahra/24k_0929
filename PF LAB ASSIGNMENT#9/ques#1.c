  #include <stdio.h>
  #include <string.h>
  int main()
{
  char palindrome[100];
  printf("enter the string:");
  scanf("%s",&palindrome);
  printf("\nyour entered string is %s",palindrome);
  int length=strlen(palindrome);
  char reversed[length+1];
  
  int i;
  for(i=0;i<length;i++)
{
   reversed[i]=palindrome[length-i-1];
}
   reversed[length]='\0';

  if (strcmp(palindrome,reversed)==0)
  {
    printf("\n%s is a palindrome",palindrome);
  }
  else
  {
    printf("\n%s is not a palindrome",palindrome);
  }

    return 0;
}
