  #include <stdio.h>
  int main()
{
    int numbers[]={2,5,6,8,9,12};
    int i,j;
    int count=sizeof(numbers)/sizeof(numbers[0]);
    printf("count=%d\n",count);

   for (i=0;i<6;i++)
{
      j=numbers[i];
     while(j!=0)
    {
        printf("*");
        j=j-1;
    }
    printf("\n");
}
   for (i=0;i<12;i++)
{
    for(j=0;j<count;j++)
{
     if(numbers[j]>=12-i) printf("* ");
            else printf("  ");
}
 printf("\n");
           if(i==12-1){
            for(int i=0; i<count; i++){
                printf("%d ",numbers[i]);
}
 }


}
    return 0;
}