#include <stdio.h>

int main (){
int distance=1207;

int totaldistance=2*distance;
printf("Totaldistance=%d",totaldistance);

int fuelavg;

printf("\nenter positive numbers");
printf("\nfuelavg=");
scanf("\n%d",&fuelavg);

int fuelconsumed=distance/fuelavg;
printf("\nfuel consumed =%d",fuelconsumed);

printf("\ntotal cost for the forward trip");
int cost=fuelconsumed*118;
printf("\ncost=%d",cost);

printf("\ntotal cost for the backward trip");
int cost2=distance*123;
printf("\ncost2=%d",cost2);

int TotalTripCost=cost+cost2;
printf("\ntotaltripcost=%d",TotalTripCost);


 return 0;
}