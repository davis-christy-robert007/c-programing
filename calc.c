#include <stdio.h>
int main()
{
    int num1,num2;
    char operator;
    printf("enter the value of num1");
    scanf("%d",&num1);
    printf("enter the value of num2");
    scanf("%d",&num2);
    printf("enter the operator:");
    scanf(" %c",&operator);
    
    switch (operator)
    {
     case '+':
     printf("sum%d\n",num1+num2);
     break;
     case'-':
     printf("minus:%d\n",num1-num2);
     break;
     case'*':
     printf("multiplication:%d\n",num1*num2);
     break;
     case'/':
             if (num2!=0){
                printf("division:%f\n",num1/(float)num2);
              } else {
                 printf("cannot divde by zero");}
                 break;
     case'%':
             if (num2!=0){
               printf("modulus:%d\n",num1%num2);
                
              } else {
                 printf("cannot divde by zero");}
                 break;
     
     printf("invalid operator selected");
     break;
     
    }
    return 0; }



