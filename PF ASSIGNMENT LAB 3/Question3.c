#include <stdio.h>

int main(){
    
  int salary;
  printf("salary=");
  scanf("%d",&salary);
  
  float taxrate;
  printf("\n taxrate=");
  scanf("%f",&taxrate);
  
 int taxpaid=salary*taxrate;
  printf("\n taxpaid=%d",taxpaid);
  
 int finalamount=salary-taxpaid;
  printf("\n finalamount=%d",finalamount);
  
return 0;
}
