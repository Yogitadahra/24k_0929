   #include <stdio.h>
   int main()
{
    int marks,amarks,attendance;
    printf("enter your obtaine marks out of 100:");
    scanf("%d",marks);
    printf("\nenter your assigment obtained score out of 100:");
    scanf("%d",&amarks);
    printf("\nenter your attandace obtained out of 100:");
    scanf("%d",&attendance);

    if (attendance<80)
{ 
    printf("\nyou are not allowed to give the exam");
}    
     else if(marks>=90 && amarks>=80)
{   
     printf("\n you have secured a A+ grade");
}
     else if(marks>=80 && amarks>=70)
{
     printf("\n you got a an A grade");
}
     else if (marks>=70 && amarks>=60)
{    
     printf("\nyou have got a B grade");
}
     else if (marks>=60 && amarks>=50)
{
     printf("\nyou have got a C grade");
}
     else if (marks>=50 && amarks>=45)
{
    printf("\nyou have got a D grade");
}    
     else
{
    printf("\n you have got an F grade and you are fail");
}


    return 0;
}