#include <stdio.h>


  int main() 
{   
    int num1,num2;
    printf("enter num1=");
    scanf("%d",&num1);
    printf("\n enter num2=");
    scanf("%d",&num2);

    char operator;
    printf("Enter a operator: ");
    scanf(" %c", &operator); 

  
    switch (operator)
     {
    case '+' :
    printf("\n num1+num2=%d",num1+num2);
    break;
    case '-':
    printf("\n num1-num2=%d",num1-num2);
    break;
    case '*':
    printf("\n num1*num2=%d",num1*num2);
    break;
    case '/':
    printf("\n num1/num2=%d",num1/num2);
    break;
    default:
    printf("invalid input");
    }

    return 0;
}