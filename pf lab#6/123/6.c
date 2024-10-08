  #include <stdio.h>
  int main()
{
    int i=1,j=2,ans=1,n=1;
    printf("(%d",i);
    printf(",%d",j);
    //(1,2,2,4,8,32,256,8192,2097152)
     
    while(n<8)
{
    ans=i*j;
    printf(",%d",ans);
    i=j;
    j=ans;
    n++;     
}
    printf(")");
    return 0;
}