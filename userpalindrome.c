#include <stdio.h>
int pali(int num) {
     int temp =num;
      int rev=0;
     while (temp!=0) {
       rev=rev*10 + temp%10;
       temp/=10;
 }
 
       return (num==rev);
       }
   
     int main(){
     int num;
      printf("enter the number:");
      scanf("%d",&num);
      
        if(pali(num)){
        printf("the number is palindrome \n");
        }else{
        printf("the number is not palindrome\n");
        }
        return 0;
        }
         
     

    
