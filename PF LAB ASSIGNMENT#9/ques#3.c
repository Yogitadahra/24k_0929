 #include <stdio.h>
 void primenumbers(int n);

 int main()
 {
    int n;
    printf("enter the number");
    scanf("%d",&n);
    primenumbers(n);
 }

 void primenumbers(int n)
 {
    int i=2;
    int count=1;
    if (n==2)
    {
        printf("\nit is a prime number");
    }

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count=0;
            break;
        }
        
    }
    if (count==0)
    {
        printf("\nit is not a prime");
    }
    else
    {
      printf("\nit is a prime number");
    }
 }

  