#include <stdio.h>

int main()
{
   char ch;
   printf("character=");
   scanf(" %c",&ch);

    if (ch>='A' && ch<='z')
{
   printf("capital alphabet");

}  
    else if (ch>='a' && ch<='z')
{  
    printf("small alphabet");
}
    else if (ch<='0' && ch>='9')
{
    printf("digit");
}
    else 
{
    printf("special character");
}
   

    return 0;
}