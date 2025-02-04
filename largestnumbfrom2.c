//write a program to find the largest among two no
//author davis christy robert
//date:28-1-2025
#include <stdio.h>
int main(){
    int num1,num2,num3,largest;
    printf("enter three numbers sperated by space:");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2){
        if (num1>num3){
        largest=num1;
        } else {
             largest=num3;}
        } else {
        if (num2>num3){
            largest =num2;}
        else{
            largest= num3;
         }
         }printf("largest number :%d",largest);
         return 0; }      

