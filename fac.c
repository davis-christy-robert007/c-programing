#include <stdio.h>
int main()
{
    int num,factorial=1;
    printf("enter the number:");
    scanf("%d",&num);
    if(num<0){
    printf("number is negative");
     }
   
    else{
    while (num>0)
     {    
       factorial=factorial*num;
       num--;
       }
       printf("the factorial of number  is %d",factorial);
       }
       return 0 ;
       }

