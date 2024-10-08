  #include <stdio.h>
  int main()
{
  int n,value=0; 
  do
  {
    printf("enter the number:");
    scanf("%d",&n);
    value=value+n;
    printf("\nthe value is:%d\n",value);  
       
  } while (n!=0); 
  
    return 0;
}