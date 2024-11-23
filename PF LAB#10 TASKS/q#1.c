 #include <stdio.h>
 void arrayelements(int arr[],int size);
 int main()
 {
   int size,i;
   printf("enter the size of array:");
   scanf("%d",&size);
   printf("\nenter array elements");
   int arr[size];
   for (i=0;i<size;i++){
      scanf("%d",&arr[i]);
   }
   printf("\nprint all the array elements");
   arrayelements(arr,size);
  
    return 0;
 }
 void arrayelements(int arr[],int size){
   if(size==0)
   {
      return;
   }
   printf("%d,",arr[0]);
   arrayelements(arr+1,size-1);

 }
