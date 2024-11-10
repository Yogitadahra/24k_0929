  #include <stdio.h>
  void maxmin(int arr[],int size);
  int main()
  {
    int size;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    maxmin(arr,size);
  }
  void maxmin(int arr[],int size)
  {
    int i;
    printf("enter the array values:");
    for (i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for (i=0;i<size;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("\nmaximum value:%d",max);
    printf("\nminimum value:%d",min);

  }
