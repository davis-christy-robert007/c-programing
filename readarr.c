#include <stdio.h>
int sum(int arr[],int size){
 int sum=0;
 for(int i=0;i<size;i++){
      sum+=arr[i];
      }
      return sum;
}
int main(){
   int size;
   printf("enter the size");
   scanf("%d",&size);
   int arr[size];
   printf("enter the elements");
   for(int i=0;i<size;i++){
   scanf("%d",&arr[i]);
   }
   int sumofarray=sum(arr,size);
   printf("the sum of elements in array is %d",sumofarray);
   return 0;
   }      
