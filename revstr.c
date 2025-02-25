#include <stdio.h>
int main(){
         char str[30];
         printf("enter the string:");
         scanf("%[^\n]",str);
         int len,i,j,temp;
         for(len=0;len[str]!='\0';len++);
         i=len-1;
         for(j=0;j<len/2;j++,i--){
         temp=str[i];
         str[i]=str[j];
         str[j]=temp;
         }
         printf("The reverse string is:%s",str);
         return 0;

}
