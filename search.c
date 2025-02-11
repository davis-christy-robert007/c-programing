#include <stdio.h>
int main()
{
      int n;
      printf("enter the values you to put:");
      scanf("%d",&n);
      int a[n],i;
      for(i=0;i<n;i++) {
        printf("enter the values");
        scanf("%d",&a[i]);
        }
        int no;
        printf("enter the value to be searched");
        scanf("%d",&no);
        for(int i=0,i<n,i++){
        if(no==a[i]){
        
        printf("the no is found");
        }

return 0;

}
