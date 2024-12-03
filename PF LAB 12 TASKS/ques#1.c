
#include <stdio.h>
#include <stdlib.h>

struct student{
    int marks;
};
float average(struct student students[],int num);

int main()
{
  int num,i;
  printf("enter the total number of students:");
  scanf("%d",&num);
  struct student *students=(struct student*)malloc(num*sizeof(struct student));

  for (i=0;i<num;i++)
  {
    printf("\nstudent number %d has marks of:",i+1);
    scanf("%d",&students[i].marks);
  }

  printf("\nthe average marks of the class is %.2f:",average(students,num));


  free(students);
   return 0;
}

float average(struct student students[],int num){
   int sum=0;
   for(int i=0;i<num;i++)
   {
    sum+=students[i].marks;
   }

   return (sum)/num;
    
}