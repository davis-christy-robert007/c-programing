//write a program to read roll no,age,height,grade 
//author davis christy robert
//date:28-1-2025
#include <stdio.h>
int main()
{
int roll_no,age;
float height;
char Grade;
printf("enter the roll no:");
scanf("%d",&roll_no);
printf("enter the age:");
scanf("%d",&age);
printf("enter the height:");
scanf("%f",&height);
printf("enter the grade:");
scanf("%c",&Grade);
printf("The roll no is %d",roll_no);
printf("The age is %d",age);
printf("The height is %fcm",height);
printf("The grade is %c",Grade);
return 0;
}
