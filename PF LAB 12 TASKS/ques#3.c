  #include <stdio.h>
  #include <stdlib.h>
  
  int sum(int arr[],int n);
  int main()
  {
    int n,i;
    printf("\nenter the size of the array:");
    scanf("%d",&n);
    
    int *arr=(int *)malloc(n*(sizeof(int))); 

   printf("\nenter array elements:");
   for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }

   printf("\nthe sum of the array elements is %d",sum(arr,n));

   free(arr);
   return 0;
  }

  int sum(int arr[],int n){
    
    int sum=0,i;
    for(i=0;i<n;i++){
     sum+=arr[i];
    }
    return sum;
  }