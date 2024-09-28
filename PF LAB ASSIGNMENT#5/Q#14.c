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

    if (age>=15 && income<=30000 && credithour>=300)
{
    printf("you are eligible for loan");
}
    else
{
    printf("you are not eligible for loan");
}



   return 0;

 }