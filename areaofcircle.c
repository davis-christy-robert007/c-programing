#include <stdio.h>
#define pi 3.14159
#define area_of_circle(r) (pi*r*r)
#define area_of_cylinder(r,h) (pi*r*r*h)
int main(){
int r,h;
printf("enter the radius");
scanf("%d",&r);
printf("enter the height");
scanf("%d",&h);
printf("AREA of the circle is%.2f",area_of_circle(r));
printf("\n");
printf("AREA of the cylinder is%.2f",area_of_cylinder(r,h));
return 0;
}
