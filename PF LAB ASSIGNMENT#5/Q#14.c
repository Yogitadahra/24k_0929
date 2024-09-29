 
  #include <stdio.h>
  int main()
{

    int age;
    printf("age=");
    scanf("%d",&age);
    int income;
    printf("\nincome=");
    scanf("%d",&income);
    int credithour;
    printf("\ncredithour=");
    scanf("%d",&credithour);

    if (age>=18)
{
     if ( income<=30000 && credithour>=100)
{
    printf("\nyou are eligible for loan");
}

    else if( income>45000 && credithour<100)
{
    printf("\nyou are eligible to vote");
}
}
    else 
{
    printf("\nyou are not eligible to vote");
}
  

   
return 0;
 }