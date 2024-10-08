  #include <stdio.h>
  int main()
{
  int n,value=0;   //do while is right loop to use here because it whas to give a number and then check the condition.
  do
  {
    printf("enter the number:");
    scanf("%d",&n);
    value=value+n;
    printf("\nthe value is:%d\n",value);  
       
  } while (n!=0); 
  
    return 0;
}
