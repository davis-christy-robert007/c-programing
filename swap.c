//write a program to swap two values using a temp variable
//author davis christy robert
//date:28-1-2025
#include <stdio.h>
int main()
{
int a,b,temp;
a=5;
b=3;
printf("a=%d and b=%d",a,b);
temp=a;
a=b;
b=temp;
printf("After swapping, a:%d and b:%d",a,b);
return 0;
}
