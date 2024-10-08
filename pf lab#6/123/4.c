  #include <stdio.h>
  int main()
{
   //(1,2,3,5,8,13)
    int n=1,i=1,j=2,ans=0;
    printf("(%d",i);
    printf(",%d",j);

    for(i=1,j=2;n<5;)
{
    ans=i+j;
    printf(",%d",ans);
    i=j;
    j=ans;
    n++;
}
   printf(")");
    return 0;

}