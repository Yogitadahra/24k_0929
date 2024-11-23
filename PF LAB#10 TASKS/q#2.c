/*Define a structure to represent a point in 2D space with x and y coordinates. Implement
functions to calculate the distance between two points and to check if a point lies within
a specific rectangular boundary.*/

#include <stdio.h>
#include <math.h>
struct points {
    int x;
    int y;
};
float calculate_distance(struct points point1,struct points point2);
void ispointinside(struct points testpoint,struct points bottom_point,struct points top_point);
int main()
{
    struct points point1,point2,testpoint;
    printf("enter the x1 cordinate:");
    scanf("%d",&point1.x);
    printf("\nenter the y1 cordinate:");
    scanf("%d",&point1.y);
    printf("\nenter the x2 cordinate:");
    scanf("%d",&point2.x);
    printf("\nenter the y2 cordinate:");
    scanf("%d",&point2.y);

   float distance=calculate_distance(point1,point2);
   printf("\nthe distance between the two points is %f",distance);
   
   struct points bottom_point;
   bottom_point.x=2;
   bottom_point.y=4;
   
   struct points top_point;
   top_point.x=10;
   top_point.y=12;
   
    printf("\nenter the points you want to test");
    printf("\nx cordinate:");
    scanf("%d",&testpoint.x);
    printf("\ny cordinate:");
    scanf("%d",&testpoint.y);

   ispointinside(testpoint,bottom_point,top_point);
     
   
    return 0;
}

 float calculate_distance(struct points point1,struct points point2)
 {
    return sqrt((point2.x-point1.x)*(point2.x-point1.x)+(point2.y-point1.y)*(point2.y-point1.y));
 }

 void ispointinside(struct points testpoint,struct points bottom_point,struct points top_point)
 {
   if (testpoint.x>bottom_point.x && testpoint.x<top_point.x  && testpoint.y>bottom_point.y && testpoint.y<top_point.y) 
   {
     printf("\nthe points lies inside the rectangle");
   }
   else
   {
    printf("\nthe points do not lies inside the rectangle");
   }
 }
