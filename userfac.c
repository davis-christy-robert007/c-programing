#include <stdio.h>
int fac(int num){
      int fact=1;
      while (num!=0){
             fact*=num;
            num--;
      }
      return fact;
 }
      int main(){
      int n;
      printf("enter the number");
      scanf("%d",&n);
    int  result=fac(n);
    printf("the result is %d",result);
    return 0;
    }
    
