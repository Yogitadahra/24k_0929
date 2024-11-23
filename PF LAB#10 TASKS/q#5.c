  /*Create a structure to store details about cars in a dealership, including make, model,
year, price, and mileage. Write a program that allows users to add new cars, display a
list of available cars, and search for cars by make or model.*/

 #include <stdio.h>
 #include <string.h>
 #define car_available 100
 struct car_details
 {
  char make[50];
  char model[50];
  int year;
  int price;
  int mileage;
 };
  int car_count=5;
 struct car_details cars[car_available] =
 {{"honda","civic",2020,2400000,28},
 {"kia","optima",2013,200000,27},
 {"audi","a4",2019,300000,27},
 {"BMW","3series",2023,2600000,26},
 {"nissan","altima",2024,1200000,24}};
 void add_cars();
 void display_cars();
 void search_car();
 int main()
 { 
  int choice;
  do{
  printf("enter your choice\n1 for adding a new car\n2 for available car details\n3 for searching for a car\n0 to exit:");
  scanf("%d",&choice);

  switch(choice)
  {
    case 0:
    break;

    case 1:
    add_cars();
    break;

    case 2:
    display_cars();
    break;

    case 3:
    search_car();
    break;

    default:
    printf("\nenter a valid choice");
    break;

  }
  
  }while(choice!=0);
    return 0;
 }

 void add_cars()
 {
   if(car_available>car_count)
   {
    printf("\nenter the make of car:");
    scanf(" %s",&cars[car_count].make);
    printf("\nenter the model of car:");
    scanf(" %s",&cars[car_count].model);
    printf("\nenter the year of car:");
    scanf(" %d",&cars[car_count].year);
    printf("\nenter the price of car:");
    scanf(" %d",&cars[car_count].price);
    printf("\nenter the mileage of car:");
    scanf(" %d",&cars[car_count].mileage);
    printf("\n car added succesfully\n");
    car_count++;
    
   }
   else
   {
    printf("\ninsufficent place no further car can be added");
   }

 }

 void display_cars()
 {
  int i;
  for (i=0;i<car_count;i++)
  {
    printf("\ncar make:%s",cars[i].make);
    printf("\ncar model:%s",cars[i].model);
    printf("\ncar year:%d",cars[i].year);
    printf("\ncar price:%d",cars[i].price);
    printf("\ncar mileage:%d\n",cars[i].mileage);
  }

 }

 void search_car()
 {
  int i,n=0;
  char search_make[50];
  char search_model[50];
  printf("enter make of the car you want to search:");
  scanf(" %s",&search_make);
  printf("enter model of the car you want to search:");
  scanf(" %s",&search_model);

  for (i=0;i<car_count;i++)
  {
    if(strcmp(cars[i].make,search_make)==0  ||strcmp(cars[i].model,search_model)==0)
    {
    printf("\ncar found\n");
    n++;
    printf("\ncar make:%s",cars[i].make);
    printf("\ncar model:%s",cars[i].model);
    printf("\ncar year:%d",cars[i].year);
    printf("\ncar price:%d",cars[i].price);
    printf("\ncar mileage:%d\n",cars[i].mileage);
    }
  }
  if(n==0)
  {
    printf("\n\ncar not found:");
  }

 }