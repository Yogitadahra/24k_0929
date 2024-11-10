  #include <stdio.h>
  #include <string.h>
  int main()
  {
    char desstr[100];
    printf("enter the destination string:");
    scanf("%s",&desstr);
    
    char soustr[100];
     printf("\nenter the source string:");
    scanf("%s",&soustr);
    int n;
    printf("\nenter the number of strings you want to append:");
    scanf("%d",&n);

    strncat(desstr,soustr,n);
    printf("\nthe new string is %s",desstr);


  }