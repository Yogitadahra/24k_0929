  /*Write a program that uses structures to manage flight information, including flight
number, departure city, destination city, date, and available seats. Create functionalities
to book a seat and display flight details.*/
  #include <stdio.h>
  #include <string.h>
  
   #define max_flight 3
  struct flightinfo{
  int f_num;
  char dep_city[50];
  char des_city[50];
  char date[20];
  int a_seats;
  };
    struct flightinfo flights[max_flight]=
    {{1,"lahore","karachi","nov10",56},
    {2,"karachi","dubai","dec24",50},
    {3,"dubai","america","jan12",80}};
  void seat_booking();
  void display_details();
  
  int main()
  {
    
    int choice;
    do{
    printf("enter your choice:\n1 for seat booking\n2 for details \n0 for exit:");
    scanf("%d",&choice);
    if (choice==0)
    {
       break;
    }
    else if(choice==1)
    {
        seat_booking();
    }
    else
    {
        display_details();
    }

    }while(choice!=0);
    return 0;
  }

   void seat_booking(){
   int no_of_tick,flight_num,i,n=0;
   printf("\nenter the flight number:");
   scanf("%d",&flight_num);

   for (i=0;i<max_flight;i++)
   {
    if(flights[i].f_num==flight_num)
    {
        printf("\n enter the number of ticket you want to book:");
        scanf("%d",&no_of_tick);
        n++;
        if (flights[i].a_seats>no_of_tick)
        {
            printf("booking succesfull you have booked %d tickets on %d flight\n",no_of_tick,flight_num);
            flights[i].a_seats-=no_of_tick;
        }
        else 
        {
            printf("\ninsufficent tickets no booking made\n");
        }
    }
       
   }
   if (n==0){
    printf("\nthis flight is not available\n");
   }
   }
    

   void display_details(){
    int i;
    for (i=0;i<max_flight;i++)
    {
        printf("\nflight number:%d",flights[i].f_num);
        printf("\ndeperature city:%s",flights[i].dep_city);
        printf("\ndestination city:%s",flights[i].des_city);
        printf("flight date:%s",flights[i].date);
        printf("\navailable seats:%d\n",flights[i].a_seats);
    }

   }



