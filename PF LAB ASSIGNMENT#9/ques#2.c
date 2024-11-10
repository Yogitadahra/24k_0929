  #include <stdio.h>
  int swapintegers(int *a,int *b);
  int main()
  {
   int a,b;
   printf("enter the value of a:");
   scanf("%d",&a);
   printf("\nenter the value of b:");
   scanf("%d",&b);
   swapintegers(&a,&b);
   printf("\nenter the values after swaping a=%d and b=%d",a,b);

    return 0;
  }
   int swapintegers(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
    return a,b;
  }