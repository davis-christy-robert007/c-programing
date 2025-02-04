//write a program to find the area of a circle
//author davis christy robert
//date:28-1-2025
#include <stdio.h>
#define pi 3.14
int main()
{
int radius;
float area;
printf("enter the radius");
scanf("%d",&radius);
area=pi*radius*radius;
printf("area is %f",area);
return 0;
}
