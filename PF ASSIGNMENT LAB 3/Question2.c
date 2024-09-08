#include <stdio.h>

int main(){
    
    int a,b,c;
    
    printf("Enter a: ");
    scanf("%d",&a);
    
    printf("eNTER B: ");
    scanf("%d",&b);
    
    c=a;
    a=b;
    b=c;
    
    printf("enter the values after swaping ");
    printf("\na=%d",a);
    printf("\nb=%d",b);
    
    return 0;
    
}
