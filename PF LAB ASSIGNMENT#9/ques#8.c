 #include <stdio.h>
 void evenodd(int n);
 int main()
 {
  int n ;
  printf("enter the number:");
  scanf("%d",&n);
  evenodd(n);


    return 0;
 }
 void evenodd(int n){

    if(n%2==0)
    {
        printf("\nit is a even number");
    }
    else
    {
        printf("\nit is a odd number");
    }
 }
 