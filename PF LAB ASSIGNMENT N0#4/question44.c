#include <stdio.h>

  int main()
{
    int actualprice;
    printf("actual price=");
    scanf("%d",&actualprice);

    float discount;
    int savedamount; 
    int newamount;

 if (actualprice>500 && actualprice<2000)
{ 
    discount=0.05;
    savedamount=actualprice*discount;
    printf("\n saved amount=%d",savedamount);
    newamount=actualprice-savedamount;
    printf("\n new amount=%d",newamount);
    
}
 else if (actualprice>=2000 && actualprice<=4000)
{
     discount=0.10;
     savedamount=actualprice*discount;
    printf("\n saved amount=%d",savedamount);
    newamount=actualprice-savedamount;
    printf("\n new amount=%d",newamount);
    
}

 else if (actualprice>4000 && actualprice<=6000)
{
      discount=0.2;
      savedamount=actualprice*discount;
    printf("\n saved amount=%d",savedamount);
    newamount=actualprice-savedamount;
    printf("\n new amount=%d",newamount);
    

}

 else if (actualprice>6000)
 { 
    discount=0.35;
    savedamount=actualprice*discount;
    printf("\n saved amount=%d",savedamount);
    newamount=actualprice-savedamount;
    printf("\n new amount=%d",newamount);
    

 }
 else 
 {
    printf(" \n no discount");
 }
 return 0;
}    


