 /*Design a structure to store information about travel packages, including package name,
destination, duration, cost, and number of seats available. Write a program that allows
users to book a travel package and display available packages.*/

 #include <stdio.h>
 #include <string.h>
 #define a_packages 3
 
 struct travel_package
 {
  int package_no;
  char package[100];
  char destination[100];
  char duration[20];
  int cost;
  int available_seats;
 };

  struct travel_package packages[a_packages]=
  {{1,"Paradise Horizons","dubai","8days",120000,50},
   {2,"memory makers","hunza","6days",80000,45},
   {3,"travlers","america","10days",150000,30}
  };

 void display_available_packages();
 void book_package();
 int main()
 {
    int choice;
    do{
    printf("enter your choice\n1 for packages details\n2 for book package\n0 to exit:");
    scanf("%d",&choice);
    if(choice==0)
    {
      break;
    }
    else if(choice==1)
    {
      display_available_packages();
    }
    else
    {
      book_package();
    }
    }while(choice!=0);
    return 0;
 }
 void display_available_packages()
 {
    int i;
    for (i=0;i<a_packages;i++){
      printf("\npackage:%s",packages[i].package);
      printf("\ndestination:%s",packages[i].destination);
      printf("\nduration:%s",packages[i].duration);
      printf("\ntotal cost:%d",packages[i].cost);
      printf("\ntotal seats available:%d\n",packages[i].available_seats);
    }
 }

 void book_package(){
  int n,i,m;
  int no_of_tickets;
  printf("\nenter the number of package you want to book:");
  scanf("%d",&n);
  for (i=0;i<a_packages;i++)
  {
    if(packages[i].package_no==n)
    {
      m++;
      printf("\nenter the number of tickets you want to book:");
      scanf("%d",&no_of_tickets);
      if(packages[i].available_seats>no_of_tickets)
      {
        printf("\nbooking succesfull you have booked %d tickets of %d package\n",no_of_tickets,n);
        packages[i].available_seats-=no_of_tickets;
      }
      else 
      {
        printf("\ninsufficent seats no booking made\n");
      }
    }
  }
  if (m==0)
  {
    printf("\npackage not available\n");
  }
 }