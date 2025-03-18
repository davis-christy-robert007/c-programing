#include <stdio.h>
int sum(int arr[],int n);
int main(){
int i,n,result;
printf("enter the size of array");
scanf("%d",&n);
int read[n];
printf("enter the elemtns");
for(i=0;i<n;i++){
scanf("%d",&read[i]);
}
result=sum(read,n);
printf("The sum is:%d",result);
return 0;
int sum(int arr[],int n){
int sum ;
for(i=0;i<
