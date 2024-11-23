 /*Write a recursive function linearSearch that takes an array, its size, the target element
to search for, and the current index. It checks if the target is at the current index and
continues searching in the subsequent indices until it either finds the target or exhausts
the array.*/

#include <stdio.h>
void targetnumber(int arr[],int size,int target,int index);
int main()
{
  int size,i;
  printf("enter the size of the array:");
  scanf("%d",&size);
  int arr[size];
   printf("Enter %d elements separated by spaces: ", size);
  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
   int target;
    printf("\nenter the number you want to find in the array:");
    scanf("%d",&target);
  targetnumber(arr,size,target,0);
    return 0;
}
 
 void targetnumber(int arr[],int size,int target,int index){
    int found=0;
    if(index==size)
    {
        
        printf("\nnumber not found"); 
        return;
    }
    if(arr[index]==target)
    {
        printf("\ntarget number is found on %d index",index);
        return;
    }
    targetnumber(arr,size,target,index+1);
    
    
 }