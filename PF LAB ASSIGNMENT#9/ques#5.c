  #include <stdio.h>
  #include <string.h>
  void reversedstring(char str[],int size);
  int main()
  {
    int size;
    printf("enter the size of string:");
    scanf("%d",&size);
    char str[size+1];
    printf("\nenter the string before reversing:");
    scanf("%s",&str);
    str[size+1]='\0';
    reversedstring(str,size);
    return 0;
  }
  void reversedstring(char str[],int size)
  {
    int i;
    
    char reversedstr[size];
    for (i=0;i<size;i++)
    {
      reversedstr[i]=str[size-i-1];
    }
    reversedstr[size]='\0';
    printf("\nenter the string after reversing:%s",reversedstr);


  }