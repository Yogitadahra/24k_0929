#include <stdio.h>

int main(){

int testinteger=3000000000;
printf("testinteger:%d",testinteger);

//The output is coming different number because the number exceeds the range 
//which is causing an overflow condition if we want to print this number we have to take a long int.


    return 0;
}