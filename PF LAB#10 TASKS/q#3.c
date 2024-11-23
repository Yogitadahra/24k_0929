 /*Create a program with a constant that defines the maximum allowable temperature (in
Celsius). Write a function to compare input temperatures and use a static variable to
count how many times temperatures exceeded the limit.*/

 #include <stdio.h>
 const int max_temp=50;
 static int count=0;
 void count_temp();
 int main()
 {
    int n;
    do
    {
      printf("enter the number\n1 for temperature checking\n0 to exit:");
      scanf("%d",&n);

      if(n==0)
      {
        break;
      }
      else 
      {
        count_temp();
      }


    }while(n!=0);

    printf("\ntemperatures has exceeds the limit %d times\n",count);
    
    return 0;
 }
 void count_temp(){
    int temp;
    printf("\nenter the temperature you want to check the limit of:");
    scanf("%d",&temp);
    if(temp>max_temp)
    {
        count++;
    }
 }