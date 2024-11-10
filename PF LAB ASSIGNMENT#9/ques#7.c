  #include <stdio.h>
  int product(int *a,int *b);

  int main()
  {
   int a,b;
   printf("enter the value of a:");
   scanf("%d",&a);
   printf("\nenter the value of b:");
   scanf("%d",&b);
   int result=product(&a,&b);
   printf("\nthe product of a and b is %d",result);
   return 0;
  }
  int product(int *a,int *b){
    int result=(*a)*(*b);
    return result;
  }