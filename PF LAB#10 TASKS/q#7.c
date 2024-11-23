  /*Create a C program that defines a constant for the conversion factor of meters to
kilometers. Use a static variable in a function to count how many times the function is
called.*/

#include <stdio.h>
void meter_to_kilometer();
const float value=0.001;
int main()
{
  static int count=0;
  int n;
  do{
  printf("enter the number\n1 to convert meters to kilomeers\n0 to exit:");
  scanf("%d",&n);
  if (n==0)
  {
    break;
  }
  else 
  {
    meter_to_kilometer();
    count++;
  }
  
}while(n!=0);

  printf("\nthe total numbers of times the function has been called is %d",count);
}
void meter_to_kilometer(){
    static int count=0;
    count++;
    int meters;
    printf("\nenter the meters you want to convert in kilometers:");
    scanf("%d",&meters);
    float km=meters*value;
    printf("\n%d meters are equal to %.2f kilometers\n",meters,km);
}