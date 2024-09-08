#include <stdio.h>

int main(){
  int amount,time;
  
  printf("enter amount between 1 and 1000000");
  printf("\namount=");
  scanf("%d",&amount);
  
  printf("\nenter time between 1to10 years");
  printf("\ntime=");
  scanf("%d",&time);
  
  float rate;
  printf("\nenter rate between 0.05to0.1");
  printf("\nrate=");
  scanf("%f",&rate);
  
  int si=amount*rate*time;
  printf("\nsimple interest=%d",si);
  
  
    
    
 return 0;
}
