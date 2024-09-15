  #include <stdio.h>

  int main(){
    int id;
    printf("customer id=");
    scanf("%d",&id);

    char name[100];
    printf("\ncustomer name:");
    scanf("%99s",&name);

    int units;
    printf("\nunit used:");
    scanf("%d",&units);

    float price;
    int bill;
  

    if(units<=199)
    {
      price=16.20;
      bill=units*price;
      printf("\ntotalbill:%d",bill);
    }

    else if (units>=200&&units<300)
      {
       price=20.10;
       bill=units*price;
       printf("\ntotalbill:%d",bill);
      }
    else if(units>=300&&units<500)
    {
      price=20.10; 
      bill=units*price;
      printf("\ntotalbill:%d",bill);
    }

    else if (units>=500)
    {
      price=35.90;
      bill=units*price;
      printf("\ntotalbill:%d",bill);

    }
      

      else
    {
        printf("invalid input"); 
    } 
    
   if (bill>18000)
   {
      printf("\nyou have to pay extra 15 percent");
      bill= bill*0.15+bill;
      printf("\nYour bill after extra 15 percent is: %d",bill);
   }
  else
   {
       printf(" \nYou have to pay %d",bill);
   }
    return 0;
  }