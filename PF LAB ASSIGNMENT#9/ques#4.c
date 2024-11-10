 #include <stdio.h>
int operation(int *a,int*b,char sign);
  int main()
  {
   int a,b;
   char sign;
   printf("enter the value of a:");
   scanf("%d",&a);
   printf("\nenter the value of b:");
   scanf("%d",&b);
   printf("\nenter the operator:");
   scanf(" %c",&sign);
  int result=operation(&a,&b,sign);
   printf("\nenter the result:%d",result);
  }
   int operation(int *a,int*b,char sign){
    int result;
    switch (sign)
    {
     case '+':
     result=*a+*b;
     break;
     case '-':
     result=*a-*b;
     break;
     case '*':
     result=(*a)*(*b);
     break;
     case '/':
     result=(*a)/(*b);
     break;
     default:
     printf("invalid operator");
     break;
   }
      return result;
   }
